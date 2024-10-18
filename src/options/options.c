#include "options.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void s21_decimal_set_sign(s21_decimal *decimal, int sign) {
  decimal_bit3 bits3;
  bits3.i = decimal->bits[3];
  if (sign == S21_POSITIVE) {
    bits3.parts.sign = S21_POSITIVE;
  } else {
    bits3.parts.sign = S21_NEGATIVE;
  }
  decimal->bits[3] = bits3.i;
}

int s21_decimal_get_sign(s21_decimal decimal) {
  decimal_bit3 bits3;
  bits3.i = decimal.bits[3];
  return bits3.parts.sign;
}

s21_decimal s21_decimal_get_zero(void) {
  // создаем переменную decimal_zero типа s21_decimal
  s21_decimal decimal_zero;
  // обнуляем биты
  decimal_zero.bits[0] = 0;
  decimal_zero.bits[1] = 0;
  decimal_zero.bits[2] = 0;
  decimal_zero.bits[3] = 0;

  return decimal_zero;
}

void align_scales(s21_decimal *a, s21_decimal *b) {
  int scale_a = s21_decimal_get_scale(*a);
  int scale_b = s21_decimal_get_scale(*b);
  uint64_t remainder = 0;

  s21_decimal *smal_scale, *larg_scale;
  int *smal_scale_value, *larg_scale_value;
  if (scale_a < scale_b) {
    smal_scale = a;
    larg_scale = b;
    smal_scale_value = &scale_a;
    larg_scale_value = &scale_b;
  } else {
    smal_scale = b;
    larg_scale = a;
    smal_scale_value = &scale_b;
    larg_scale_value = &scale_a;
  }
  while (*smal_scale_value < *larg_scale_value) {
    if (s21_can_miltiple_by_10(smal_scale) == 0) {
      multiply_by_10(smal_scale);
      (*smal_scale_value)++;
    } else {
      s21_divide_by_10(larg_scale, 1, &remainder);
      (*larg_scale_value)--;
    }
  }

  s21_decimal_set_scale(a, *smal_scale_value);
  s21_decimal_set_scale(b, *smal_scale_value);
}

int multiply_by_10(s21_decimal *dec) {
  int error = 0;
  uint64_t carry = 0;
  for (int i = 0; i < 3; ++i) {
    uint32_t adapter = (uint32_t)dec->bits[i];
    uint64_t dec_part = (uint64_t)adapter;
    uint64_t part = dec_part * 10 + carry;

    dec->bits[i] = part & 0xFFFFFFFF;
    carry = (part >> 32) + (dec_part >> 32) * 10;
  }

  if (carry != 0) {
    error = 1;
  }
  return error;
}

int s21_decimal_get_scale(s21_decimal decimal) {
  return (decimal.bits[3] & 0x00FF0000) >> 16;
}

void s21_decimal_null_service_bits(s21_decimal *value) {
  // обнуляем биты в bits[3]
  value->bits[3] = 0;
}

int s21_correct_decimal(s21_decimal decimal) {
  int code = 0;
  if (s21_decimal_get_empty1(decimal) != 0 ||
      s21_decimal_get_empty2(decimal) != 0) {
    code = 1;
  } else {
    int scale = s21_decimal_get_scale(decimal);
    if (scale < 0 || scale > 28) {
      code = 1;
    }
  }
  return code;
}

int s21_decimal_get_empty1(s21_decimal decimal) {
  decimal_bit3 bits3;
  bits3.i = decimal.bits[3];
  return bits3.parts.empty1;
}

int s21_decimal_get_empty2(s21_decimal decimal) {
  decimal_bit3 bits3;
  bits3.i = decimal.bits[3];
  return bits3.parts.empty2;
}

int s21_get_bit(s21_decimal number, int bit_position) {
  int bit_number = bit_position / 32;
  bit_position = bit_position % 32;
  int bit = (int)((number.bits[bit_number] >> bit_position) & 1u);

  return bit;
}

void s21_set_bit(int *source_number, int bit_position, int bit) {
  unsigned int mask = 1u << bit_position;

  if (bit) {
    *source_number |= mask;  // Установить бит
  } else {
    *source_number &= ~mask;  // Очистить бит
  }
}

void s21_decimal_set_scale(s21_decimal *dst, int scale) {
  dst->bits[3] = (dst->bits[3] & 0xFF00FFFF) | (scale << 16);
}

unsigned int s21_as_uint(int x) { return *((unsigned int *)&x); }

int s21_as_int(unsigned int x) { return *((int *)&x); }

int s21_is_zero(s21_decimal decimal) {
  int res = 0;
  if (decimal.bits[0] == 0 && decimal.bits[1] == 0 && decimal.bits[2] == 0) {
    res = 1;
  }
  return res;
}

s21_decimal s21_abs(s21_decimal decimal) {
  s21_decimal result = decimal;
  s21_decimal_set_sign(&result, 0);
  return result;
}

int s21_can_miltiple_by_10(s21_decimal *dec) {
  s21_decimal temp = *dec;
  return multiply_by_10(&temp);
}

void s21_divide_by_10(s21_decimal *dec, int scale, uint64_t *remainder) {
  uint64_t current = 0;

  while (scale > 0) {
    for (int i = 2; i >= 0; --i) {
      uint32_t adapter = (uint32_t)dec->bits[i];
      current = (uint64_t)*remainder << 32 | adapter;
      dec->bits[i] = current / 10;
      *remainder = current % 10;
    }
    scale = -1;
  }
}

int s21_get_first_position_bit(s21_decimal decimal) {
  // Идем по частям числа с самой старшей (2) к самой младшей (0)
  for (int i = 2; i >= 0; i--) {
    if (decimal.bits[i] != 0) {
      // Если часть не равна нулю, проверяем каждый бит от старшего к младшему
      for (int j = 31; j >= 0; j--) {
        if ((decimal.bits[i] >> j) & 1) {
          return i * 32 + j;
        }
      }
    }
  }
  return -1;  // Если число равно нулю
}

void s21_shift_left(s21_decimal *decimal) {
  // для сохранения бита при сдвиге
  int low_last_bit = s21_get_bit(*decimal, 31);
  int mid_last_bit = s21_get_bit(*decimal, 63);

  decimal->bits[0] <<= 1;
  decimal->bits[1] <<= 1;
  decimal->bits[2] <<= 1;

  s21_set_bit(&decimal->bits[1], 0, low_last_bit);
  s21_set_bit(&decimal->bits[2], 0, mid_last_bit);
}

s21_big_decimal s21_decimal_to_big_decimal(s21_decimal decimal) {
  s21_big_decimal big_decimal;
  big_decimal.bits[0] = decimal.bits[0];
  big_decimal.bits[1] = decimal.bits[1];
  big_decimal.bits[2] = decimal.bits[2];
  big_decimal.bits[3] = 0;
  big_decimal.bits[4] = 0;
  big_decimal.bits[5] = 0;
  big_decimal.bits[6] = 0;
  big_decimal.bits[7] = decimal.bits[3];
  return big_decimal;
}

int s21_big_get_bit(s21_big_decimal number, int bit_position) {
  int bit_number = bit_position / 32;
  bit_position = bit_position % 32;
  int bit = (int)((number.bits[bit_number] >> bit_position) & 1u);
  return bit;
}

void s21_big_set_bit(s21_big_decimal *source_number, int bit_position,
                     int bit) {
  int bit_number = bit_position / 32;  // Определяем индекс 32-битного слова
  int bit_offset = bit_position % 32;  // Определяем смещение внутри этого слова

  unsigned int mask = 1;
  mask <<= bit_offset;

  if (bit == 0) {
    mask = ~mask;
    source_number->bits[bit_number] &= mask;
  }

  if (bit == 1) {
    source_number->bits[bit_number] |= mask;
  }
}

int s21_big_decimal_to_decimal(s21_decimal *result, s21_big_decimal number) {
  int error = 0;

  if ((number.bits[4] != 0 || number.bits[5] != 0 || number.bits[6] != 0 ||
       number.bits[3] != 0) &&
      (s21_bank_rounding(&number) == 1)) {
    error = 1;
  }

  for (int i = 0; i < 3; ++i) {
    result->bits[i] = number.bits[i];
  }

  result->bits[3] = number.bits[7];

  if (result->bits[2] == 0 && result->bits[1] == 0 && result->bits[0] == 0) {
    s21_decimal_set_sign(result, 0);
  }

  return error;
}

int s21_bank_rounding(s21_big_decimal *number) {
  int error = 0;
  int scale = (number->bits[7] & 0x00FF0000) >> 16;
  s21_big_decimal sum_remaider = {0};

  while (scale > 0 && !error &&
         (number->bits[6] != 0 || number->bits[5] != 0 ||
          number->bits[4] != 0 || number->bits[3] != 0)) {
    error = divide_and_round(number, &scale, &sum_remaider);
  }

  if (scale == 29 && !error) {
    error = divide_and_round(number, &scale, &sum_remaider);
  }

  if (!error) {
    s21_big_decimal_set_scale(number, scale);
  }

  error = check_overflow(number, scale);

  return error;
}

int divide_and_round(s21_big_decimal *number, int *scale,
                     s21_big_decimal *sum_remaider) {
  uint64_t remainder = 0;
  s21_big_divide_by_10(number, scale, &remainder);
  s21_big_add_sum_remaider(sum_remaider, remainder);

  int should_round_up =
      (compare_remaider(*sum_remaider) == 1) ||
      (compare_remaider(*sum_remaider) == 0 && (number->bits[0] & 1));

  if ((*scale == 0 || (number->bits[6] == 0 && number->bits[5] == 0 &&
                       number->bits[4] == 0 && number->bits[3] == 0)) &&
      should_round_up) {
    return round_up(number);
  }

  return check_overflow(number, *scale);
}

int compare_remaider(s21_big_decimal val1) {
  s21_big_decimal zero_five = {{0x5, 0, 0, 0, 0, 0, 0, 0x10000}};

  align_big_scales(&val1, &zero_five);
  return s21_big_compare_decimal(val1, zero_five);
}

void s21_big_add_sum_remaider(s21_big_decimal *sum_remaider,
                              uint64_t remainder) {
  uint32_t adapter_rem = (uint32_t)remainder;
  s21_big_decimal temp = {{(int)adapter_rem, 0, 0, 0, 0, 0, 0, 0}};
  s21_big_decimal res = {{0, 0, 0, 0, 0, 0, 0, 0}};
  int scale = s21_big_decimal_get_scale(*sum_remaider);

  for (int i = 0; i < scale; ++i) {
    big_multiply_by_10(&temp);
  }
  scale++;
  uint64_t tmp = 0;

  for (int i = 0; i < 8; ++i) {
    uint32_t adapter = (uint32_t)sum_remaider->bits[i];
    uint32_t adapter2 = (uint32_t)temp.bits[i];
    uint64_t sum = (uint64_t)adapter + adapter2 + tmp;
    tmp = sum >> 32;
    res.bits[i] = sum & 0xFFFFFFFF;
  }

  for (int i = 0; i < 7; ++i) {
    sum_remaider->bits[i] = (uint32_t)res.bits[i];
  }

  s21_big_decimal_set_scale(sum_remaider, scale);
}

void s21_big_divide_by_10(s21_big_decimal *dec, int *scale,
                          uint64_t *remainder) {
  uint64_t current = 0;
  *remainder = 0;

  for (int i = 6; i >= 0; --i) {
    uint32_t adapter = (uint32_t)dec->bits[i];
    current = ((uint64_t)*remainder << 32) | adapter;
    dec->bits[i] = (uint32_t)(current / 10);
    *remainder = current % 10;
  }

  (*scale)--;
}

int round_up(s21_big_decimal *number) {
  uint64_t carry = 1;
  for (int i = 0; i < 7 && carry > 0; ++i) {
    uint32_t adapter = (uint32_t)number->bits[i];
    uint64_t sum = (uint64_t)adapter + carry;
    number->bits[i] = (uint32_t)sum;
    carry = sum >> 32;
  }
  return (carry > 0) ? 1 : 0;
}

int check_overflow(s21_big_decimal *number, int scale) {
  for (int i = DECIMAL_SIZE; i < 7; ++i) {
    if (number->bits[i] != 0) {
      return (scale == 0) ? 1 : 0;
    }
  }
  return 0;
}

void align_big_scales(s21_big_decimal *a, s21_big_decimal *b) {
  int scale_a = s21_big_decimal_get_scale(*a);
  int scale_b = s21_big_decimal_get_scale(*b);

  s21_big_decimal *smal_scale;
  int *smal_scale_value, *larg_scale_value;
  if (scale_a < scale_b) {
    smal_scale = a;

    smal_scale_value = &scale_a;
    larg_scale_value = &scale_b;
  } else {
    smal_scale = b;

    smal_scale_value = &scale_b;
    larg_scale_value = &scale_a;
  }
  while (*smal_scale_value < *larg_scale_value) {
    big_multiply_by_10(smal_scale);
    (*smal_scale_value)++;
  }

  s21_big_decimal_set_scale(a, *smal_scale_value);
  s21_big_decimal_set_scale(b, *smal_scale_value);
}

int big_multiply_by_10(s21_big_decimal *number) {
  int error = 0;

  uint64_t carry = 0;
  for (int i = 0; i < 7; ++i) {
    uint32_t adapter = (uint32_t)number->bits[i];
    uint64_t dec_part = (uint64_t)adapter;

    uint64_t part = dec_part * 10 + carry;

    number->bits[i] = part & 0xFFFFFFFF;
    carry = (part >> 32) + (dec_part >> 32) * 10;
  }
  return error;
}

void s21_big_decimal_set_scale(s21_big_decimal *number, int scale) {
  uint32_t mask = 0xFF << 16;
  number->bits[7] &= ~mask;
  number->bits[7] |= ((uint32_t)scale << 16);
}

int s21_big_decimal_get_scale(s21_big_decimal number) {
  return (number.bits[7] & 0x00FF0000) >> 16;
}

void s21_big_decimal_set_sign(s21_big_decimal *number, int sign) {
  if (number == NULL) {
    return;  // Ранний выход при некорректных входных данных
  }

  // Бит знака находится в старшем бите последнего элемента массива bits
  if (sign) {
    // Устанавливаем знаковый бит (отрицательное число)
    number->bits[7] |= SIGN_MASK;
  } else {
    // Сбрасываем знаковый бит (положительное число)
    number->bits[7] &= ~SIGN_MASK;
  }
}

int s21_big_nomalize(s21_big_decimal *number, int *scale) {
  int err = 0;
  int f = 0;
  if (number->bits[6] != 0 || number->bits[5] != 0 || number->bits[4] != 0 ||
      number->bits[3] != 0 || number->bits[2] != 0 || number->bits[1] != 0 ||
      number->bits[0] != 0) {
    f = 1;
  }
  while (*scale < 0) {
    big_multiply_by_10(number);
    (*scale)++;
  }
  s21_big_decimal sum_remaider = {0};
  while (*scale > 28) {
    divide_and_round(number, scale, &sum_remaider);
  }
  if (number->bits[6] == 0 && number->bits[5] == 0 && number->bits[4] == 0 &&
      number->bits[3] == 0 && number->bits[2] == 0 && number->bits[1] == 0 &&
      number->bits[0] == 0 && f == 1) {
    err = 1;
    s21_big_decimal_set_sign(number, 0);
  }

  s21_big_decimal_set_scale(number, *scale);
  return err;
}

void s21_big_long_division(s21_big_decimal dividend, s21_big_decimal divider,
                           s21_big_decimal *quotient,
                           s21_big_decimal *remainder) {
  // Инициализация результата и остатка
  *quotient = (s21_big_decimal){0};
  *remainder = (s21_big_decimal){0};

  // Основной алгоритм деления
  for (int i = 223; i >= 0; i--) {
    s21_big_shift_left(remainder);
    remainder->bits[0] |= (dividend.bits[i / 32] >> (i % 32)) & 1;

    if (s21_big_compare_decimal(*remainder, divider) >= 0) {
      s21_big_decimal temp = *remainder;
      s21_big_sub_big(temp, divider, remainder);
      quotient->bits[i / 32] |= (1U << (i % 32));
    }
  }
}

int s21_big_sub_big(s21_big_decimal val1, s21_big_decimal val2,
                    s21_big_decimal *res) {
  int borrow = 0;
  int is_negative = 0;
  s21_big_decimal result = {0};

  for (int i = 0; i < 224; i++) {
    int bit1 = s21_big_get_bit(val1, i);
    int bit2 = s21_big_get_bit(val2, i);

    int result_bit = bit1 - bit2 - borrow;

    if (result_bit < 0) {
      result_bit += 2;
      borrow = 1;
    } else {
      borrow = 0;
    }

    s21_big_set_bit(&result, i, result_bit % 2);
  }

  if (borrow) {
    // Если после вычитания остался заем, значит val2 > val1
    // Вычисляем дополнение до максимального значения
    is_negative = 1;
    for (int i = 0; i < 7; i++) {
      result.bits[i] = ~result.bits[i];
    }
    // Добавляем 1 к результату
    for (int i = 0; i < 7; i++) {
      result.bits[i]++;
      if (result.bits[i] != 0) break;
    }
  }

  *res = result;
  return is_negative;
}

int s21_big_compare_decimal(s21_big_decimal val1, s21_big_decimal val2) {
  int result_code = 0;
  for (int i = 223; i >= 0 && !result_code; i--) {
    result_code = s21_big_get_bit(val1, i) - s21_big_get_bit(val2, i);
  }
  return result_code;
}

void s21_big_shift_left(s21_big_decimal *number) {
  int bit0_1 = s21_big_get_bit(*number, 31);
  int bit1_2 = s21_big_get_bit(*number, 63);
  int bit2_3 = s21_big_get_bit(*number, 95);
  int bit3_4 = s21_big_get_bit(*number, 127);
  int bit4_5 = s21_big_get_bit(*number, 159);
  int bit5_6 = s21_big_get_bit(*number, 191);

  number->bits[0] = (number->bits[0] << 1);
  number->bits[1] = (number->bits[1] << 1) | bit0_1;
  number->bits[2] = (number->bits[2] << 1) | bit1_2;
  number->bits[3] = (number->bits[3] << 1) | bit2_3;
  number->bits[4] = (number->bits[4] << 1) | bit3_4;
  number->bits[5] = (number->bits[5] << 1) | bit4_5;
  number->bits[6] = (number->bits[6] << 1) | bit5_6;
}

void s21_remains_algorithm_big(
    s21_big_decimal *remainder, s21_big_decimal *big_result,
    s21_big_decimal big_value_2,
    int *result_scale) {  // Алгоритм для расчёта остатка деления после запятой
  while ((remainder->bits[0] != 0 || remainder->bits[1] != 0 ||
          remainder->bits[2] != 0 || remainder->bits[3] != 0 ||
          remainder->bits[4] != 0 || remainder->bits[5] != 0 ||
          remainder->bits[6] != 0) &&
         (*result_scale) < 32) {  // проводим деление для остатка пока
                                  // остается остаток или степень > -28
    s21_big_decimal tempRes = *big_result;
    big_multiply_by_10(remainder);
    big_multiply_by_10(&tempRes);
    s21_big_decimal tempReminder = {0};
    s21_big_decimal tempQuatient = {0};
    s21_big_long_division(*remainder, big_value_2, &tempQuatient,
                          &tempReminder);
    int rem = 0;

    for (int i = 0; i < 224; i++) {
      int tempBit = s21_big_get_bit(tempRes, i);
      s21_big_set_bit(&tempRes, i,
                      (tempBit + s21_big_get_bit(tempQuatient, i) + rem) % 2);
      rem = (tempBit + s21_big_get_bit(tempQuatient, i) + rem) / 2;
    }

    memcpy(big_result->bits, tempRes.bits, sizeof(big_result->bits));
    memcpy(remainder->bits, tempReminder.bits, sizeof(remainder->bits));
    (*result_scale)++;
    // }
  }
}
