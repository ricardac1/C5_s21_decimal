#include "compare.h"

int s21_is_less_or_equal(s21_decimal first, s21_decimal second) {
  int res = 0;
  if (s21_is_less(first, second) || s21_is_equal(first, second)) {
    res = 1;
  }
  return res;
}