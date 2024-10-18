#include "./../s21_decimal.h"
#include "test_main.h"

void test_from_int_to_decimal_helper(int number, s21_decimal decimal_check) {
  s21_decimal result;
  int code = s21_from_int_to_decimal(number, &result);

  ck_assert_int_eq(code, TEST_OTHER_OK);
  ck_assert_int_eq(s21_is_equal(result, decimal_check), 1);
}

// Тесты на некорректные данные

START_TEST(test_from_int_to_decimal_fail1) {
  int number = -2147483648;
  int result = s21_from_int_to_decimal(number, NULL);

  ck_assert_int_eq(result, TEST_OTHER_ERROR);
}
END_TEST

// Тесты на корректные данные

START_TEST(test_from_int_to_decimal_ok1) {
  int number = -2147483648;
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x80000000}};
  test_from_int_to_decimal_helper(number, decimal_check);
}
END_TEST

START_TEST(test_from_int_to_decimal_ok2) {
  int number = -2147483647;
  s21_decimal decimal_check = {{0x7FFFFFFF, 0x0, 0x0, 0x80000000}};
  test_from_int_to_decimal_helper(number, decimal_check);
}
END_TEST

START_TEST(test_from_int_to_decimal_ok3) {
  int number = -214748364;
  s21_decimal decimal_check = {{0xCCCCCCC, 0x0, 0x0, 0x80000000}};
  test_from_int_to_decimal_helper(number, decimal_check);
}
END_TEST

START_TEST(test_from_int_to_decimal_ok4) {
  int number = -214748;
  s21_decimal decimal_check = {{0x346DC, 0x0, 0x0, 0x80000000}};
  test_from_int_to_decimal_helper(number, decimal_check);
}
END_TEST

START_TEST(test_from_int_to_decimal_ok5) {
  int number = -1000;
  s21_decimal decimal_check = {{0x3E8, 0x0, 0x0, 0x80000000}};
  test_from_int_to_decimal_helper(number, decimal_check);
}
END_TEST

START_TEST(test_from_int_to_decimal_ok6) {
  int number = -1;
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};
  test_from_int_to_decimal_helper(number, decimal_check);
}
END_TEST

START_TEST(test_from_int_to_decimal_ok7) {
  int number = 0;
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};
  test_from_int_to_decimal_helper(number, decimal_check);
}
END_TEST

START_TEST(test_from_int_to_decimal_ok8) {
  int number = 1;
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};
  test_from_int_to_decimal_helper(number, decimal_check);
}
END_TEST

START_TEST(test_from_int_to_decimal_ok9) {
  int number = 1000;
  s21_decimal decimal_check = {{0x3E8, 0x0, 0x0, 0x0}};
  test_from_int_to_decimal_helper(number, decimal_check);
}
END_TEST

START_TEST(test_from_int_to_decimal_ok10) {
  int number = 214748;
  s21_decimal decimal_check = {{0x346DC, 0x0, 0x0, 0x0}};
  test_from_int_to_decimal_helper(number, decimal_check);
}
END_TEST

START_TEST(test_from_int_to_decimal_ok11) {
  int number = 214748364;
  s21_decimal decimal_check = {{0xCCCCCCC, 0x0, 0x0, 0x0}};
  test_from_int_to_decimal_helper(number, decimal_check);
}
END_TEST

START_TEST(test_from_int_to_decimal_ok12) {
  int number = 2147483646;
  s21_decimal decimal_check = {{0x7FFFFFFE, 0x0, 0x0, 0x0}};
  test_from_int_to_decimal_helper(number, decimal_check);
}
END_TEST

START_TEST(test_from_int_to_decimal_ok13) {
  int number = 2147483647;
  s21_decimal decimal_check = {{0x7FFFFFFF, 0x0, 0x0, 0x0}};
  test_from_int_to_decimal_helper(number, decimal_check);
}
END_TEST

Suite *from_int_to_decimal(void) {
  Suite *s;
  TCase *tc;

  s = suite_create("from_int_to_decimal");
  tc = tcase_create("Core");

  tcase_add_test(tc, test_from_int_to_decimal_fail1);

  tcase_add_test(tc, test_from_int_to_decimal_ok1);
  tcase_add_test(tc, test_from_int_to_decimal_ok2);
  tcase_add_test(tc, test_from_int_to_decimal_ok3);
  tcase_add_test(tc, test_from_int_to_decimal_ok4);
  tcase_add_test(tc, test_from_int_to_decimal_ok5);
  tcase_add_test(tc, test_from_int_to_decimal_ok6);
  tcase_add_test(tc, test_from_int_to_decimal_ok7);
  tcase_add_test(tc, test_from_int_to_decimal_ok8);
  tcase_add_test(tc, test_from_int_to_decimal_ok9);
  tcase_add_test(tc, test_from_int_to_decimal_ok10);
  tcase_add_test(tc, test_from_int_to_decimal_ok11);
  tcase_add_test(tc, test_from_int_to_decimal_ok12);
  tcase_add_test(tc, test_from_int_to_decimal_ok13);

  suite_add_tcase(s, tc);

  return s;
}
