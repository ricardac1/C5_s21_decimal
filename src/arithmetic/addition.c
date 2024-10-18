#include "arithmetic.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
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
      if (s21_is_greater(s21_abs(value_2), s21_abs(value_1))) {
        err = s21_main_sub(value_2, value_1, result);

      } else {
        err = s21_main_sub(value_1, value_2, result);
      }

    } else if (sing1 < sing2) {
      if (s21_is_greater(s21_abs(value_1), s21_abs(value_2))) {
        err = s21_main_sub(value_1, value_2, result);
      } else {
        err = s21_main_sub(value_2, value_1, result);
      }
    } else {
      err = s21_add_main(value_1, value_2, result);
    }
  }

  if (err == S21_ARITHMETIC_BIG && sing1 > 0 && sing2 > 0) {
    err = S21_ARITHMETIC_SMALL;
  }

  return err;
}

int s21_add_main(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal *result) {
  uint64_t tmp = 0;
  int err = S21_ARITHMETIC_OK;
  s21_big_decimal value_1_big = s21_decimal_to_big_decimal(value_1);
  s21_big_decimal value_2_big = s21_decimal_to_big_decimal(value_2);
  s21_big_decimal result_big = {0};

  align_big_scales(&value_1_big, &value_2_big);
  for (int i = 0; i < 7; i++) {
    uint32_t adapter = (uint32_t)value_1_big.bits[i];
    uint32_t adapter2 = (uint32_t)value_2_big.bits[i];
    uint64_t sum = (uint64_t)adapter + adapter2 + tmp;
    tmp = sum >> 32;
    result_big.bits[i] = sum & 0xFFFFFFFF;
  }
  result_big.bits[7] = value_1_big.bits[7];

  err = s21_big_decimal_to_decimal(result, result_big);

  if (err == 1) {
    err = S21_ARITHMETIC_BIG;
  }

  return err;
}