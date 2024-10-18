#include "converters.h"

int s21_from_float_to_decimal(float src, s21_decimal *dst) {
  if (!dst) {
    return 1;
  } else if (src == 0.0) {
    *dst = s21_decimal_get_zero();
  } else if (isinf(src) || isnan(src)) {
    return 1;
  } else {
    int sign = 0;
    if (src < 0) sign = 1;
    char buffer[50];
    sprintf(buffer, "%.6E", fabsf(src));
    remove_char(buffer, '.');
    int number = atoi(buffer);
    int scale = 0;
    if (fabs(src) < 1.0) {
      scale = abs((int)floor(log10(fabs(src)))) + 6;
      adjust_scale_and_number(&number, &scale);
      set_decimal_values(number, scale, dst);
    } else if (fabs(src) >= 1.0) {
      scale = (log(fabs(src)) / log(10));
      if (scale > 6 && scale < 34) {
        int division_by_ten = scale - 6;
        scale = 0;
        set_decimal_values(number, scale, dst);
        for (int i = 0; i < division_by_ten; i++) {
          multiply_by_10(dst);
        }
      }
    }
    if (sign) {
      s21_decimal_set_sign(dst, 1);
    }
  }
  return 0;
}

// запись числа через int в децимал
void set_decimal_values(int number, int scale, s21_decimal *dst) {
  s21_from_int_to_decimal(number, dst);
  s21_decimal_set_scale(dst, abs(scale));
}

// удаление ненужных символов, вывод числа для записи в децимал
void remove_char(char *str, char ch) {
  int len = strlen(str);
  int j = 0;
  for (int i = 0; i < len; i++) {
    if (str[i] != ch) {
      str[j++] = str[i];
    }
  }
  str[j] = '\0';  // Устанавливаем новый конец строки
}

// обработка случаев, когда степень выходит за пределы
void adjust_scale_and_number(int *number, int *scale) {
  double dra = 10.0;
  if (*scale > 28) {
    int num_cut = *scale - 28;
    for (int i = 0; i < num_cut; i++) {
      *number = round(*number / dra);
    }
    *scale -= num_cut;
  }
}
