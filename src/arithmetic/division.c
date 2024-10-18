#include "arithmetic.h"

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int err = S21_ARITHMETIC_OK;
  int divisor_high_index = 2;
  while (divisor_high_index >= 0 && value_2.bits[divisor_high_index] == 0) {
    divisor_high_index--;
  }

  if (divisor_high_index < 0) {
    return S21_ARITHMETIC_DIV_ZERO;
  }

  s21_big_decimal value_1_big = s21_decimal_to_big_decimal(value_1);
  s21_big_decimal value_2_big = s21_decimal_to_big_decimal(value_2);
  s21_big_decimal remainder_big = {0};
  s21_big_decimal quotient_big = {0};

  // Выполняем деление
  s21_big_long_division(value_1_big, value_2_big, &quotient_big,
                        &remainder_big);

  int sign_result =
      s21_decimal_get_sign(value_1) ^ s21_decimal_get_sign(value_2);
  if (sign_result) {
    s21_big_decimal_set_sign(&quotient_big, 1);
  }

  // Обрабатываем масштаб результата

  int scale_result = s21_big_decimal_get_scale(value_1_big) -
                     s21_big_decimal_get_scale(value_2_big);

  s21_remains_algorithm_big(&remainder_big, &quotient_big, value_2_big,
                            &scale_result);

  if (s21_big_nomalize(&quotient_big, &scale_result)) {
    s21_big_decimal_to_decimal(result, quotient_big);
    err = S21_ARITHMETIC_SMALL;
  } else {
    err = s21_big_decimal_to_decimal(result, quotient_big);
  }
  if (err == 1 && sign_result == 1) {
    err = S21_ARITHMETIC_SMALL;
  }
  if ((quotient_big.bits[6] == 0 && quotient_big.bits[5] == 0 &&
       quotient_big.bits[4] == 0 && quotient_big.bits[3] == 0 &&
       quotient_big.bits[2] == 0 && quotient_big.bits[1] == 0 &&
       quotient_big.bits[0] == 0) &&
      (remainder_big.bits[6] != 0 || remainder_big.bits[5] != 0 ||
       remainder_big.bits[4] != 0 || remainder_big.bits[3] != 0 ||
       remainder_big.bits[2] != 0 || remainder_big.bits[1] != 0 ||
       remainder_big.bits[0] != 0)) {
    err = S21_ARITHMETIC_SMALL;
  }

  return err;
}
