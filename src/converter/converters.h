#ifndef CONVERTERS_H_
#define CONVERTERS_H_

#define S21_MAX_FLOAT 79228157791897854723898736640.0f
#define S21_MIN_FLOAT \
  0.00000000000000000000000000010000000031710768509710513471352647538147514756461109f
#include <limits.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../other/other.h"
#include "../s21_decimal.h"
#include "./../options/options.h"
#include "./../s21_decimal.h"

int s21_from_decimal_to_float(s21_decimal src, float *dst);
int s21_from_decimal_to_int(s21_decimal src, int *dst);
int s21_from_float_to_decimal(float src, s21_decimal *dst);
int s21_from_int_to_decimal(int src, s21_decimal *dst);
void remove_char(char *str, char ch);
void set_decimal_values(int number, int scale, s21_decimal *dst);
void adjust_scale_and_number(int *number, int *scale);

#define S21_POSITIVE 0
#define S21_NEGATIVE 1

#endif
