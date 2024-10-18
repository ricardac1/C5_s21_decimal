#include "converters.h"

int s21_from_int_to_decimal(int src, s21_decimal *dst) {
  int code = 0;
  if (!dst) {
    code = S21_NEGATIVE;

  } else if (src > INT_MAX || src < INT_MIN) {
    code = S21_NEGATIVE;
  } else {
    dst->bits[0] = 0;
    dst->bits[1] = 0;
    dst->bits[2] = 0;
    dst->bits[3] = 0;

    int sign = 0;
    if (src < 0) {
      src = -src;
      sign = 1;
    }
    dst->bits[0] = src;
    s21_decimal_set_sign(dst, sign);
  }
  return code;
}
