#ifndef MAIN_TEST_H
#define MAIN_TEST_H

#include <check.h>
#include <float.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "../arithmetic/arithmetic.h"
#include "../compare/compare.h"
#include "../converter/converters.h"
#include "../options/options.h"
#include "../other/other.h"
#include "../s21_decimal.h"

#define TEST_ARITHMETIC_OK 0
#define TEST_ARITHMETIC_BIG 1
#define TEST_ARITHMETIC_SMALL 2
#define TEST_ARITHMETIC_ZERO_DIV 3

#define TEST_OTHER_OK 0
#define TEST_OTHER_ERROR 1

#define TEST_COMPARE_FALSE 0
#define TEST_COMPARE_TRUE 1

typedef union float_cast_test {
  float f;
  struct {
    uint32_t mantisa : 23;
    uint32_t exponent : 8;
    uint32_t sign : 1;
  } parts;
  uint32_t bytes;
  int int32_bytes;
} float_cast_test;

Suite *add_suite0(void);
Suite *add_suite1(void);
Suite *add_suite2(void);
Suite *add_suite3(void);
Suite *add_suite4(void);
Suite *add_suite5(void);
Suite *add_suite6(void);
Suite *add_suite7(void);
Suite *add_suite8(void);
Suite *add_suite9(void);

Suite *sub_suite0(void);
Suite *sub_suite1(void);
Suite *sub_suite2(void);
Suite *sub_suite3(void);
Suite *sub_suite4(void);
Suite *sub_suite5(void);
Suite *sub_suite6(void);
Suite *sub_suite7(void);
Suite *sub_suite8(void);
Suite *sub_suite9(void);

Suite *mul_suite0(void);
Suite *mul_suite1(void);
Suite *mul_suite2(void);
Suite *mul_suite3(void);
Suite *mul_suite4(void);
Suite *mul_suite5(void);
Suite *mul_suite6(void);
Suite *mul_suite7(void);
Suite *mul_suite8(void);
Suite *mul_suite9(void);

Suite *div_suite0(void);
Suite *div_suite1(void);
Suite *div_suite2(void);
Suite *div_suite3(void);
Suite *div_suite4(void);
Suite *div_suite5(void);
Suite *div_suite6(void);
Suite *div_suite7(void);
Suite *div_suite8(void);
Suite *div_suite9(void);
Suite *div_suite10(void);
Suite *div_suite11(void);
Suite *div_suite12(void);
Suite *div_suite13(void);
Suite *div_suite14(void);
Suite *div_suite15(void);
Suite *div_suite16(void);
Suite *div_suite17(void);
Suite *div_suite18(void);

Suite *mod_suite0(void);
Suite *mod_suite1(void);
Suite *mod_suite2(void);
Suite *mod_suite3(void);
Suite *mod_suite4(void);
Suite *mod_suite5(void);
Suite *mod_suite6(void);
Suite *mod_suite7(void);
Suite *mod_suite8(void);
Suite *mod_suite9(void);
Suite *mod_suite10(void);
Suite *mod_suite11(void);
Suite *mod_suite12(void);
Suite *mod_suite13(void);
Suite *mod_suite14(void);
Suite *mod_suite15(void);
Suite *mod_suite16(void);
Suite *mod_suite17(void);
Suite *mod_suite18(void);

void test_add(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check);
void test_add_fail(s21_decimal decimal1, s21_decimal decimal2, int check);
void test_sub(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check);
void test_sub_fail(s21_decimal decimal1, s21_decimal decimal2, int check);
void test_mul(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check);
void test_mul_fail1(s21_decimal decimal1, s21_decimal decimal2, int code_check);
void test_mul_fail2(s21_decimal decimal1, s21_decimal decimal2,
                    s21_decimal decimal_check, int code_check);
void test_div(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check);
void test_div_fail1(s21_decimal decimal1, s21_decimal decimal2, int code_check);
void test_div_fail2(s21_decimal decimal1, s21_decimal decimal2,
                    s21_decimal decimal_check, int code_check);

// other functions
Suite *suite_negate(void);
Suite *suite_truncate(void);
Suite *suite_round(void);
Suite *suite_floor(void);
Suite *is_equal_suite1(void);
Suite *is_equal_suite2(void);
Suite *is_equal_suite3(void);
Suite *is_greater_suite1(void);
Suite *is_greater_suite2(void);
Suite *is_greater_or_equal_suite1(void);
Suite *is_greater_or_equal_suite2(void);
Suite *is_less_suite1(void);
Suite *is_less_suite2(void);
Suite *is_less_suite3(void);
Suite *is_less_suite4(void);
Suite *is_less_suite5(void);
Suite *is_less_suite6(void);
Suite *is_less_suite7(void);
Suite *is_less_suite8(void);
Suite *is_less_suite9(void);
Suite *is_less_suite10(void);
Suite *is_less_or_equal_suite1(void);
Suite *is_less_or_equal_suite2(void);
Suite *is_not_equal_suite1(void);
Suite *is_not_equal_suite2(void);
Suite *is_not_equal_suite3(void);
Suite *from_int_to_decimal(void);
Suite *from_float_to_decimal(void);
Suite *from_decimal_to_int(void);
Suite *from_decimal_to_float_suite1(void);

void run_tests(void);
void run_testcase(Suite *testcase);
void test_from_float_to_decimal(int f, s21_decimal decimal_check);
void test_from_int_to_decimal_helper(int number, s21_decimal decimal_check);
void test_from_decimal_to_int_helper(s21_decimal decimal, int number_check);
void test_from_decimal_to_float(s21_decimal decimal, int check);

void test_is_equal(s21_decimal decimal1, s21_decimal decimal2, int check);
void test_is_greater_or_equal(s21_decimal decimal1, s21_decimal decimal2,
                              int check);
void test_is_greater(s21_decimal decimal1, s21_decimal decimal2, int check);

#endif