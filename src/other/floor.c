#include <stdio.h>

#include "./other.h"

int s21_floor(s21_decimal value, s21_decimal *result) {
  s21_other_result code = S21_OTHER_OK;

  if (!result) {
    // Если указатель на decimal является NULL
    code = S21_OTHER_ERROR;
  } else if (s21_correct_decimal(value)) {
    // Проверяем, что value является корректными decimal
    code = S21_OTHER_ERROR;
  } else {
    *result = s21_decimal_get_zero();
    int sign = s21_decimal_get_sign(value);
    s21_decimal fractional;
    s21_decimal one = {{0x1, 0x0, 0x0, 0x0}};
    s21_decimal zero = {{0}};
    s21_decimal abs_result = s21_abs(value);
    s21_decimal truncate_result;

    s21_truncate(abs_result, &truncate_result);

    s21_sub(abs_result, truncate_result, &fractional);
    //  Если дробная часть была больше нуля и число было отрицательным, то
    //  прибавляем 1
    if (sign == S21_NEGATIVE && s21_is_greater(fractional, zero)) {
      s21_add(truncate_result, one, result);
      s21_decimal_set_sign(result, sign);
    } else {
      *result = truncate_result;
      s21_decimal_set_sign(result, sign);
    }
  }

  return code;
}