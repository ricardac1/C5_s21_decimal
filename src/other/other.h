#ifndef SRC_OTHER_OTHER_H_
#define SRC_OTHER_OTHER_H_
#include "../arithmetic/arithmetic.h"
#include "../compare/compare.h"
#include "../options/options.h"
#include "../s21_decimal.h"

int s21_floor(s21_decimal value, s21_decimal *result);
int s21_round(s21_decimal value, s21_decimal *result);
int s21_truncate(s21_decimal value, s21_decimal *result);
int s21_divide_by_10_truncate(s21_decimal *decimal);
int s21_negate(s21_decimal value, s21_decimal *result);
int s21_round(s21_decimal value, s21_decimal *result);

// 0 - OK
// 1 - ошибка вычисления
// s21_other_result - испоьзуется для обработки ошибок
typedef enum s21_other_result {
  S21_OTHER_OK = 0,
  S21_OTHER_ERROR = 1
} s21_other_result;
#endif
