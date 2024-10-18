#include "./other.h"
#include "stdio.h"

int s21_divide_by_10_truncate(s21_decimal *decimal) {
  int buffer = 0;
  int scale = s21_decimal_get_scale(*decimal);
  s21_decimal result = {{0}};

  int first_position = s21_get_first_position_bit(*decimal);

  for (int i = 0; i < first_position + 2; i++) {
    if (buffer >= 10) {
      s21_shift_left(&result);
      s21_set_bit(&result.bits[0], 0,
                  1);  // установка младшего бита результата в 1

      buffer = buffer - 10u;

      // получение нового бита из числа и добавление его в буфер
      int new_bit = s21_get_bit(*decimal, first_position - i);
      buffer = buffer << 1;
      s21_set_bit(&buffer, 0, new_bit);
    } else {
      s21_shift_left(&result);
      s21_set_bit(&result.bits[0], 0,
                  0);  // установка младшего бита результата в 0

      int new_bit = s21_get_bit(*decimal, first_position - i);
      buffer = buffer << 1;
      s21_set_bit(&buffer, 0, new_bit);
    }
  }
  buffer = buffer >> 1;
  *decimal = result;
  s21_decimal_set_sign(decimal, scale);

  return buffer;
}

/**
 * @brief Основной цикл деления. функция работает следующим образом:
 * Описание работы функции:
 * Функция получает число и позицию самого старшего бита.
 *
 *
 * Основной цикл деления:
 * Внутри цикла происходит обработка каждого бита числа, начиная с самого
 * старшего и заканчивая самым младшим. Буфер сдвигается влево и добавляется
 * новый бит из числа. Если буфер больше или равен 10, выполняются операции
 * сдвига результата влево и установка младшего бита результата в 1. Затем из
 * буфера вычитается 10. Если буфер меньше 10, выполняется сдвиг результата
 * влево и установка младшего бита результата в 0. Обновление результата и
 * возврат остатка:
 *
 * Обновляется исходное число, устанавливается результат деления и степень.
 *
 *
 * Возвращается остаток от деления.
 *
 * вспомогательные функции в options.h
 */
int s21_truncate(s21_decimal value, s21_decimal *result) {
  s21_other_result code = S21_OTHER_OK;

  if (!result) {
    // проверка на NULL
    code = S21_OTHER_ERROR;
  } else if (s21_correct_decimal(value)) {
    code = S21_OTHER_ERROR;
  } else {
    s21_decimal zero = {{0x0, 0x0, 0x0, 0x0}};
    *result = zero;
    int scale = s21_decimal_get_scale(value);
    s21_decimal tmp = value;

    // обнуляем биты в bits[3]
    s21_decimal_null_service_bits(&tmp);

    for (int i = 0; i < scale; i++) {
      s21_divide_by_10_truncate(&tmp);
    }

    *result = tmp;

    // устанавливаем правильный знак
    if (s21_decimal_get_sign(value) == S21_NEGATIVE) {
      s21_decimal_set_sign(result, S21_NEGATIVE);
    }
  }

  return code;
}
