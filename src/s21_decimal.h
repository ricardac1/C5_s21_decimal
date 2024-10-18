#ifndef SRC_H_
#define SRC_H_

// библиотека для uint32_t
#include <math.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

typedef struct s21_decimal {
  int bits[4];
} s21_decimal;

typedef struct s21_big_decimal {
  int bits[8];
} s21_big_decimal;

// общее количество бит в decimal
#define MAX_BITS 128
// Общее количество бит в одном элементе массива
#define MAX_BLOCK_BITS 32
// Общее количество бит основания decimal (целого числа, которое хранит значение
// decimal)
#define MAX_BLOCK_NUMBER 96

/* union это это специальный тип данных, который позволяет хранить различные
    типы данных в одном и том же участке памяти.
    uint32_t - представляет собой 32-битное беззнаковое целое число.

    16 бит: Биты от 0 до 15, младшее слово, не используются и должны быть равны
   нулю. 8 бит: Биты с 16 по 23 должны содержать показатель степени от 0 до 28.
    7 бит: Биты с 24 по 30 не используются и должны быть равны нулю.
    1 бит: Бит 31 содержит знак; 0 означает положительный, а 1 означает
   отрицательный. Итого 32 бита
*/
typedef union decimal_bit3 {
  int i;
  struct {
    uint32_t empty2 : 16;
    uint32_t scale : 8;
    uint32_t empty1 : 7;
    uint32_t sign : 1;
  } parts;
} decimal_bit3;

// s21_decimal_sign - представляет собой 1-битное беззнаковое целое число.
typedef enum s21_decimal_sign {
  S21_POSITIVE = 0,
  S21_NEGATIVE = 1
} s21_decimal_sign;

#endif
