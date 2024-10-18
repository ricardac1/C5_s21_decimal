#include "./../s21_decimal.h"
#include "test_main.h"

void test_from_decimal_to_int_helper(s21_decimal decimal, int number_check) {
  int result;
  int code = s21_from_decimal_to_int(decimal, &result);

  ck_assert_int_eq(code, S21_POSITIVE);
  ck_assert_int_eq(result, number_check);
}

// Тесты на корректные данные

START_TEST(test_from_decimal_to_int_ok1) {
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80000000}};
  int number_check = -2147483648;
  int result;
  int code = s21_from_decimal_to_int(decimal, &result);

  ck_assert_int_eq(code, S21_POSITIVE);
  ck_assert_int_eq(result, number_check);
}
END_TEST

START_TEST(test_from_decimal_to_int_ok2) {
  s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0x80000000}};
  int number_check = -2147483647;
  test_from_decimal_to_int_helper(decimal, number_check);
}
END_TEST

START_TEST(test_from_decimal_to_int_ok3) {
  s21_decimal decimal = {{0xCCCCCCC, 0x0, 0x0, 0x80000000}};
  int number_check = -214748364;
  test_from_decimal_to_int_helper(decimal, number_check);
}
END_TEST

START_TEST(test_from_decimal_to_int_ok4) {
  s21_decimal decimal = {{0x346DC, 0x0, 0x0, 0x80000000}};
  int number_check = -214748;
  test_from_decimal_to_int_helper(decimal, number_check);
}
END_TEST

START_TEST(test_from_decimal_to_int_ok5) {
  // -1000.123
  s21_decimal decimal = {{0xF42BB, 0x0, 0x0, 0x80030000}};
  int number_check = -1000;
  test_from_decimal_to_int_helper(decimal, number_check);
}
END_TEST

START_TEST(test_from_decimal_to_int_ok6) {
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x80000000}};
  int number_check = -1;
  test_from_decimal_to_int_helper(decimal, number_check);
}
END_TEST

START_TEST(test_from_decimal_to_int_ok7) {
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x0}};
  int number_check = 0;
  test_from_decimal_to_int_helper(decimal, number_check);
}
END_TEST

START_TEST(test_from_decimal_to_int_ok8) {
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x0}};
  int number_check = 1;
  test_from_decimal_to_int_helper(decimal, number_check);
}
END_TEST

START_TEST(test_from_decimal_to_int_ok9) {
  // 0.1
  s21_decimal decimal = {{0x00000001, 0x0, 0x0, 0x00010000}};
  int number_check = 0;

  int result;
  int code = s21_from_decimal_to_int(decimal, &result);

  ck_assert_int_eq(code, S21_POSITIVE);
  ck_assert_int_eq(result, number_check);
}
END_TEST

START_TEST(test_from_decimal_to_int_ok10) {
  s21_decimal decimal = {{0x0001e240, 0x0, 0x0, 0x00030000}};
  int number_check = 123;
  test_from_decimal_to_int_helper(decimal, number_check);
}
END_TEST

START_TEST(test_from_decimal_to_int_ok11) {
  s21_decimal decimal = {{0xCCCCCCC, 0x0, 0x0, 0x0}};
  int number_check = 214748364;
  test_from_decimal_to_int_helper(decimal, number_check);
}
END_TEST

START_TEST(test_from_decimal_to_int_ok12) {
  s21_decimal decimal = {{0x7FFFFFFE, 0x0, 0x0, 0x0}};
  int number_check = 2147483646;
  test_from_decimal_to_int_helper(decimal, number_check);
}
END_TEST

START_TEST(test_from_decimal_to_int_ok13) {
  s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0x0}};
  int number_check = 2147483647;
  test_from_decimal_to_int_helper(decimal, number_check);
}
END_TEST

// Тесты на некорректные данные

START_TEST(test_from_decimal_to_int_fail1) {
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x0}};
  int result = s21_from_decimal_to_int(decimal, NULL);

  ck_assert_int_eq(result, S21_NEGATIVE);
}
END_TEST

START_TEST(test_from_decimal_to_int_fail2) {
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x0}};
  int result;
  int code = s21_from_decimal_to_int(decimal, &result);

  ck_assert_int_eq(code, S21_NEGATIVE);
}
END_TEST

START_TEST(test_from_decimal_to_int_fail3) {
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x0}};
  int result;
  int code = s21_from_decimal_to_int(decimal, &result);

  ck_assert_int_eq(code, S21_NEGATIVE);
}
END_TEST

Suite *from_decimal_to_int(void) {
  Suite *s;
  TCase *tc;

  s = suite_create("from_decimal_to_int");
  tc = tcase_create("Core");

  tcase_add_test(tc, test_from_decimal_to_int_fail1);
  tcase_add_test(tc, test_from_decimal_to_int_fail2);
  tcase_add_test(tc, test_from_decimal_to_int_fail3);

  tcase_add_test(tc, test_from_decimal_to_int_ok1);
  tcase_add_test(tc, test_from_decimal_to_int_ok2);
  tcase_add_test(tc, test_from_decimal_to_int_ok3);
  tcase_add_test(tc, test_from_decimal_to_int_ok4);
  tcase_add_test(tc, test_from_decimal_to_int_ok5);
  tcase_add_test(tc, test_from_decimal_to_int_ok6);
  tcase_add_test(tc, test_from_decimal_to_int_ok7);
  tcase_add_test(tc, test_from_decimal_to_int_ok8);
  tcase_add_test(tc, test_from_decimal_to_int_ok9);
  tcase_add_test(tc, test_from_decimal_to_int_ok10);
  tcase_add_test(tc, test_from_decimal_to_int_ok11);
  tcase_add_test(tc, test_from_decimal_to_int_ok12);
  tcase_add_test(tc, test_from_decimal_to_int_ok13);

  suite_add_tcase(s, tc);

  return s;
}
