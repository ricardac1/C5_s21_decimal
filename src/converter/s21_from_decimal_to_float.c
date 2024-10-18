#include "converters.h"

int s21_from_decimal_to_float(s21_decimal src, float *dst) {
  int code = S21_POSITIVE;
  if (dst == NULL) {
    return S21_NEGATIVE;  // Некорректный указатель
  }

  if (s21_correct_decimal(src)) {
    return S21_NEGATIVE;  // Некорректный decimal
  }

  int sign = s21_decimal_get_sign(src);
  int scale = s21_decimal_get_scale(src);

  if (code == S21_POSITIVE) {
    double result = 0.0;

    // Каждый бит decimal переводим в double, для этого каждый бит представляем
    // как 2 в степени позиции бита и прибавляем к результату
    for (int i = 0; i < 96; i++) {
      int bit = (src.bits[i / 32] >> (i % 32)) & 1;
      if (bit != 0) {
        result += pow(2.0, i);
      }
    }

    // Затем учитываем степень и корректируем итоговый результат
    double num_10 = pow(10, scale);
    result = result / num_10;

    if (sign == S21_NEGATIVE) {
      result *= -1.0;
    }

    *dst = (float)result;
  }

  return code;
}
