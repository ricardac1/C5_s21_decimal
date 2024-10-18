#include "compare.h"

// Проверяет равны ли два значения s21_decimal.
//
// @param first первое значение s21_decimal
// @param second второе значение s21_decimal
//
// @brief Выравнивает степени, сравнивает от младших к старшим биты, знаки и
// степени
//
// @return 1, если два значения равны, 0 в противном случае
int s21_is_equal(s21_decimal first, s21_decimal second) {
  int res = 0;
  align_scales(&first, &second);
  if (s21_as_uint(first.bits[0]) == s21_as_uint(second.bits[0]) &&
      s21_as_uint(first.bits[1]) == s21_as_uint(second.bits[1]) &&
      s21_as_uint(first.bits[2]) == s21_as_uint(second.bits[2]) &&
      s21_decimal_get_sign(first) == s21_decimal_get_sign(second) &&
      s21_decimal_get_scale(first) == s21_decimal_get_scale(second)) {
    res = 1;
  }
  return res;
}