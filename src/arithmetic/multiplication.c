#include "arithmetic.h"

int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int err = S21_ARITHMETIC_OK;

  s21_big_decimal result_big = {{0}};

  uint64_t temp_res[6] = {0};

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      uint32_t adapter1 = (uint32_t)value_1.bits[i];
      uint32_t adapter2 = (uint32_t)value_2.bits[j];
      uint64_t temp = (uint64_t)adapter1 * adapter2;
      temp_res[i + j] += temp;
      if (temp_res[i + j] > 0XFFFFFFFF) {
        temp_res[i + j + 1] += temp_res[i + j] >> 32;
        temp_res[i + j] &= 0xFFFFFFFF;  // 11111111111111111111111111111111
      }
    }
  }

  for (int i = 0; i < 6; i++) {
    uint32_t adapter = (uint32_t)temp_res[i];
    result_big.bits[i] = adapter;
  }

  // Обрабатываем знак результата
  int sign_result =
      s21_decimal_get_sign(value_1) ^ s21_decimal_get_sign(value_2);
  if (sign_result) {
    s21_big_decimal_set_sign(&result_big, 1);
  }

  // Обрабатываем масштаб результата
  int scale_result =
      s21_decimal_get_scale(value_1) + s21_decimal_get_scale(value_2);

  if (s21_big_nomalize(&result_big, &scale_result)) {
    s21_big_decimal_to_decimal(result, result_big);
    err = S21_ARITHMETIC_SMALL;
  } else {
    err = s21_big_decimal_to_decimal(result, result_big);
  }

  if (err == 1 && sign_result == 1) {
    err = S21_ARITHMETIC_SMALL;
  }
  return err;
}
