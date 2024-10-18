#include "arithmetic.h"

int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  s21_arithmetic_res err = S21_ARITHMETIC_OK;

  if (!result) {
    err = S21_ARITHMETIC_ERR;
  }

  if (s21_correct_decimal(value_1) || s21_correct_decimal(value_2)) {
    err = S21_ARITHMETIC_ERR;
  }

  int sing1 = s21_decimal_get_sign(value_1);
  int sing2 = s21_decimal_get_sign(value_2);

  if (err == S21_ARITHMETIC_OK) {
    if (sing1 > sing2) {
      err = s21_add_main(s21_abs(value_1), value_2, result);
      s21_negate(*result, result);
      if (err == S21_ARITHMETIC_BIG) {
        err = S21_ARITHMETIC_SMALL;
      }
    } else if (sing1 < sing2) {
      err = s21_add_main(value_1, s21_abs(value_2), result);

    } else {
      if (s21_is_greater(s21_abs(value_2), s21_abs(value_1))) {
        err = s21_main_sub(value_2, value_1, result);
        s21_negate(*result, result);
      } else {
        err = s21_main_sub(value_1, value_2, result);
      }
    }
  }

  if (err == S21_ARITHMETIC_BIG && sing1 > 0 && sing2 > 0) {
    err = S21_ARITHMETIC_SMALL;
  }

  return err;
}

int s21_main_sub(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal *result) {
  int err = S21_ARITHMETIC_OK;
  s21_big_decimal value_1_big = s21_decimal_to_big_decimal(value_1);
  s21_big_decimal value_2_big = s21_decimal_to_big_decimal(value_2);
  s21_big_decimal result_big = {0};

  // Выравнивание масштабов для big_decimal
  align_big_scales(&value_1_big, &value_2_big);

  int borrow = 0;
  for (int i = 0; i < 224; i++) {
    int diff = s21_big_get_bit(value_1_big, i) -
               s21_big_get_bit(value_2_big, i) - borrow;
    if (diff < 0) {
      diff += 2;
      borrow = 1;
    } else {
      borrow = 0;
    }
    s21_big_set_bit(&result_big, i, diff);
  }
  result->bits[3] = value_1.bits[3];

  // Копируем информацию о знаке и масштабе
  result_big.bits[7] = value_1_big.bits[7];

  // Преобразование обратно в decimal с проверкой на переполнение
  err = s21_big_decimal_to_decimal(result, result_big);

  return err;
}
