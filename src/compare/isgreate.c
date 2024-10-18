#include "compare.h"

// Сравнивает 2 децимала, какой больше
//
// @param first первое значение s21_decimal
// @param second второе значение s21_decimal
//
// @brief Проверяет децимал на ноль, сравнивает знаки, степени, биты от старших
// к младшим
//
//
// @return 1, если первое значение больше второго, 0 в противном случае
int s21_is_greater(s21_decimal first, s21_decimal second) {
  s21_big_decimal first_big, second_big;
  int sign_check = s21_decimal_get_sign(first);
  int sign_check2 = s21_decimal_get_sign(second);
  int iszero1 = s21_is_zero(first);
  int iszero2 = s21_is_zero(second);
  int res = 0;

  if (iszero1 == 1) {
    if (sign_check == 1) {
      s21_decimal_set_sign(&first, 0);
    }
  } else if (iszero2 == 1) {
    if (sign_check2 == 1) {
      s21_decimal_set_sign(&second, 0);
    }
  }

  int sign1 = s21_decimal_get_sign(first);
  int sign2 = s21_decimal_get_sign(second);
  first_big = s21_decimal_to_big_decimal(first);
  second_big = s21_decimal_to_big_decimal(second);
  if (sign1 == 0 && sign2 == 1) {
    res = 1;
  } else if (sign1 == 1 && sign2 == 0) {
    res = 0;
  } else if (s21_is_equal(first, second)) {
    res = 0;
  } else if (iszero1 == 0 && iszero2 == 1) {
    res = 1;
  } else if (iszero1 == 1 && iszero2 == 0) {
    res = 0;
  } else if (sign1 == 0 && sign2 == 0) {
    align_big_scales(&first_big, &second_big);
    int check = s21_big_compare_decimal(first_big, second_big);
    if (check == 0) {
      res = 0;
    } else if (check == 1) {
      res = 1;
    } else if (check == -1) {
      res = 0;
    }
  } else if (sign1 == 1 && sign2 == 1) {
    align_big_scales(&first_big, &second_big);
    int check = s21_big_compare_decimal(first_big, second_big);
    if (check == 0) {
      res = 0;
    } else if (check == 1) {
      res = 0;
    } else if (check == -1) {
      res = 1;
    }
  }

  return res;
}
