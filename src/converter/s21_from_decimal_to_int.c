#include <limits.h>

#include "../arithmetic/arithmetic.h"
#include "../s21_decimal.h"
#include "converters.h"

int s21_from_decimal_to_int(s21_decimal src, int *dst) {
  int code = S21_POSITIVE;

  if (dst == NULL) {
    code = S21_NEGATIVE;
  } else if (s21_correct_decimal(src)) {
    code = S21_NEGATIVE;
  }
  if (code == S21_POSITIVE) {
    int scale = s21_decimal_get_scale(src);
    if (scale == 0 &&
        (src.bits[2] != 0 || src.bits[1] != 0)) {  // если дробной части нет
      code = S21_NEGATIVE;
    }
    s21_decimal result;
    s21_truncate(src, &result);  // вызывается для удаления дробной части

    int sign = s21_decimal_get_sign(src);  // получаем знак
    unsigned int num_int = result.bits[0];  // получаем целую часть

    if (sign == 0 && num_int > INT_MAX) {  // проверка на переполнение
      code = S21_NEGATIVE;
    } else if (sign == 1 && num_int > (unsigned int)INT_MAX + 1) {
      code = S21_NEGATIVE;
    }
    if (sign) {
      *dst = -(int)num_int;
    } else {
      *dst = (int)num_int;
    }
  }

  return code;
}
