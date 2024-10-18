#ifndef SRC_OPTIONS_OPRTIONS_H_
#define SRC_OPTIONS_OPRTIONS_H_

#include "../arithmetic/arithmetic.h"
#include "../s21_decimal.h"

#define SIGN_MASK 0x80000000
#define MAX_SCALE 28
#define DECIMAL_SIZE 3

// функция для установки знака в Decimal
void s21_decimal_set_sign(s21_decimal *decimal, int sign);

// функция для получения знака Decimal
int s21_decimal_get_sign(s21_decimal decimal);

// функция формирует 0 в виде Decimal
s21_decimal s21_decimal_get_zero(void);

// функция возвращает степень Decimal
int s21_decimal_get_scale(s21_decimal decimal);

// функция зануляет все биты, не являющиеся самим числом decimal
void s21_decimal_null_service_bits(s21_decimal *value);

// функция возвращает значение битов с 24 по 30 в bits[3] они должны быть равны
// нулю
int s21_decimal_get_empty1(s21_decimal decimal);

// функция возвращает значение битов с 0 до 15 в bits[3] они должны быть равны
// нулю
int s21_decimal_get_empty2(s21_decimal decimal);

// функция проверяет корректность Decimal 0 число корректно 1 не корректно
int s21_correct_decimal(s21_decimal decimal);

// функция возвращает значение бита по позиции
int s21_get_bit(s21_decimal number, int bit_position);

// функция устанавливает значение бита по позиции
void s21_set_bit(int *source_number, int bit_position, int bit);

// Запись степени в decimal
void s21_decimal_set_scale(s21_decimal *dst, int scale);

void align_scales(s21_decimal *a, s21_decimal *b);

// функция возвращает позицию самого старшего бита
int s21_get_first_position_bit(s21_decimal decimal);

// функция сдвига на 1 бит влево
void s21_shift_left(s21_decimal *decimal);

int multiply_by_10(s21_decimal *dec);
unsigned int s21_as_uint(int x);
int s21_as_int(unsigned int x);
int s21_is_zero(s21_decimal decimal);

s21_big_decimal s21_decimal_to_big_decimal(s21_decimal decimal);

// взятие позиции бита из s21_big_decimal
int s21_big_get_bit(s21_big_decimal number, int bit_position);

// установка бита в s21_big_decimal
void s21_big_set_bit(s21_big_decimal *source_number, int bit_position, int bit);

void align_big_scales(s21_big_decimal *a, s21_big_decimal *b);
int big_multiply_by_10(s21_big_decimal *number);
void s21_big_divide_by_10(s21_big_decimal *dec, int *scale,
                          uint64_t *remainder);

int s21_big_decimal_to_decimal(s21_decimal *result, s21_big_decimal number);
int s21_bank_rounding(s21_big_decimal *number);
void s21_big_decimal_set_scale(s21_big_decimal *number, int scale);
void s21_big_decimal_set_sign(s21_big_decimal *number, int sign);
int s21_big_decimal_get_scale(s21_big_decimal number);
int check_overflow(s21_big_decimal *number, int scale);
int round_up(s21_big_decimal *number);
int divide_and_round(s21_big_decimal *number, int *scale,
                     s21_big_decimal *sum_remaider);

s21_decimal s21_abs(s21_decimal decimal);
void s21_divide_by_10(s21_decimal *dec, int scale, uint64_t *remainder);
int s21_can_miltiple_by_10(s21_decimal *dec);
int s21_big_nomalize(s21_big_decimal *number, int *scale);
void s21_big_shift_left(s21_big_decimal *number);
int s21_big_compare_decimal(s21_big_decimal val1, s21_big_decimal val2);
int s21_big_sub_big(s21_big_decimal val1, s21_big_decimal val2,
                    s21_big_decimal *res);

void s21_big_long_division(s21_big_decimal divident, s21_big_decimal divider,
                           s21_big_decimal *quotient,
                           s21_big_decimal *remainder);

void s21_remains_algorithm_big(s21_big_decimal *remainder,
                               s21_big_decimal *big_result,
                               s21_big_decimal big_value_2, int *result_scale);
void s21_big_add_sum_remaider(s21_big_decimal *sum_remaider,
                              uint64_t remainder);
int compare_remaider(s21_big_decimal val1);
#endif
