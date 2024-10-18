#include "./other.h"

int s21_negate(s21_decimal value, s21_decimal *result) {
  s21_other_result code = S21_OTHER_OK;
  if (!result) {
    code = S21_OTHER_ERROR;
  } else {
    *result = value;
    s21_decimal_set_sign(result, !s21_decimal_get_sign(*result));

    if (s21_correct_decimal(value) == 1) {
      code = S21_OTHER_ERROR;
    }
  }
  return code;
}
