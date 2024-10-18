#ifndef ARITHMETIC_H
#define ARITHMETIC_H

#include "../options/options.h"
#include "../other/other.h"
#include "../s21_decimal.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_add_main(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_main_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

// 0 — OK;
// 1 — число слишком велико или равно бесконечности;
// 2 — число слишком мало или равно отрицательной бесконечности;
// 3 — деление на 0.

typedef enum s21_arithmetic_res {
  S21_ARITHMETIC_OK = 0,
  S21_ARITHMETIC_BIG = 1,
  S21_ARITHMETIC_SMALL = 2,
  S21_ARITHMETIC_DIV_ZERO = 3,
  S21_ARITHMETIC_ERR = -1
} s21_arithmetic_res;

#endif
