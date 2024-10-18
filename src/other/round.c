#include "../options/options.h"
#include "./other.h"
#include "stdio.h"

int s21_round(s21_decimal value, s21_decimal *result) {
  s21_other_result code = S21_OTHER_OK;

  // проверки на корректность
  if (!result) {
    code = S21_OTHER_ERROR;
  } else if (s21_correct_decimal(value)) {
    code = S21_OTHER_ERROR;
  } else {
    *result = s21_decimal_get_zero();
    int sign = s21_decimal_get_sign(value);
    s21_decimal abs_result = s21_abs(value);
    s21_decimal truncate_result;
    s21_decimal fractional;
    s21_decimal zero_five = {{0x5, 0x0, 0x0, 0x10000}};
    s21_decimal one = {{1, 0, 0, 0}};

    s21_truncate(abs_result, &truncate_result);
    s21_sub(abs_result, truncate_result, &fractional);
    if (s21_is_greater_or_equal(fractional, zero_five)) {
      s21_truncate(abs_result, &truncate_result);
      s21_add(truncate_result, one, result);
      s21_decimal_set_sign(result, sign);
    } else {
      *result = truncate_result;
      s21_decimal_set_sign(result, sign);
    }
  }
  return code;
}
