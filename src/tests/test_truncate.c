#include "../options/options.h"
#include "../s21_decimal.h"
#include "test_main.h"

void test_truncate(s21_decimal decimal, s21_decimal decimal_check);

START_TEST(test_truncate_fail1) {
  // 792281625.14264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};

  int code = s21_truncate(decimal, NULL);

  ck_assert_int_eq(code, TEST_OTHER_ERROR);
}

START_TEST(test_truncate_fail2) {
  // степень 154 (показатель степени должен быть от 0 до 28)
  // биты 0-15 не нули
  // биты 24-30 не нули
  s21_decimal decimal = {{0, 0, 0, 1000000000}};
  s21_decimal result;

  int code = s21_truncate(decimal, &result);

  ck_assert_int_eq(code, TEST_OTHER_ERROR);
}
END_TEST

START_TEST(test_truncate_fail3) {
  // степень 29 (показатель степени должен быть от 0 до 28)
  s21_decimal decimal = {{-1, 0, 0, 0x1D0000}};
  s21_decimal result;

  int code = s21_truncate(decimal, &result);

  ck_assert_int_eq(code, TEST_OTHER_ERROR);
}
END_TEST

START_TEST(test_truncate_fail4) {
  // степень 29 (показатель степени должен быть от 0 до 28)
  s21_decimal decimal = {{0, 0, 0, 0x1D0000}};
  s21_decimal result;

  int code = s21_truncate(decimal, &result);

  ck_assert_int_eq(code, TEST_OTHER_ERROR);
}
END_TEST

START_TEST(test_truncate_ok1) {
  // 79228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok2) {
  // -79228162514264337593543950.335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80030000}};
  // -79228162514264337593543950
  s21_decimal decimal_check = {{0x9DB22D0E, 0x4BC6A7EF, 0x418937, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok3) {
  // 9.223372036854775808
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x120000}};
  // 9
  s21_decimal decimal_check = {{0x9, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok4) {
  // -21474836.48
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80020000}};
  // -21474836
  s21_decimal decimal_check = {{0x147AE14, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok5) {
  // 15606476756221269530542694.4
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x10000}};
  // 15606476756221269530542694
  s21_decimal decimal_check = {{0x99A68266, 0xCCD9B599, 0xCE8CC, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok6) {
  // -5528975858153100.1041203977407
  s21_decimal decimal = {{0xE1075CBF, 0x83C69196, 0xB2A69DCA, 0x800D0000}};
  // -5528975858153100
  s21_decimal decimal_check = {{0x1FF368C, 0x13A493, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok7) {
  // -971581975960439387923990646.0
  s21_decimal decimal = {{0x42DFD49C, 0x8AC2B989, 0x1F64BCDC, 0x80010000}};
  // -971581975960439387923990646
  s21_decimal decimal_check = {{0x537CC876, 0x7446AC27, 0x323AC7C, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok8) {
  // -7651852239.3104965872505107888
  s21_decimal decimal = {{0x38F8B5B0, 0xB3027414, 0xF73EA362, 0x80130000}};
  // -7651852239
  s21_decimal decimal_check = {{0xC815FFCF, 0x1, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok9) {
  // 3306.6596212280347416372581915
  s21_decimal decimal = {{0xBBE6161B, 0x80B5390B, 0x6AD80C1C, 0x190000}};
  // 3306
  s21_decimal decimal_check = {{0xCEA, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}
START_TEST(test_truncate_ok10) {
  // -79228162.514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80150000}};
  // -79228162
  s21_decimal decimal_check = {{0x4B8ED02, 0x0, 0x0, 0x80000000}};
  test_truncate(decimal, decimal_check);
}

Suite *suite_truncate(void) {
  Suite *s = suite_create("suite_to_truncate");
  TCase *tc = tcase_create("to_truncate_tc");

  tcase_add_test(tc, test_truncate_fail1);
  tcase_add_test(tc, test_truncate_fail2);
  tcase_add_test(tc, test_truncate_fail3);
  tcase_add_test(tc, test_truncate_fail4);
  tcase_add_test(tc, test_truncate_ok1);
  tcase_add_test(tc, test_truncate_ok2);
  tcase_add_test(tc, test_truncate_ok3);
  tcase_add_test(tc, test_truncate_ok4);
  tcase_add_test(tc, test_truncate_ok5);
  tcase_add_test(tc, test_truncate_ok6);
  tcase_add_test(tc, test_truncate_ok7);
  tcase_add_test(tc, test_truncate_ok8);
  tcase_add_test(tc, test_truncate_ok9);
  tcase_add_test(tc, test_truncate_ok10);

  suite_add_tcase(s, tc);
  return s;
}

void test_truncate(s21_decimal decimal, s21_decimal decimal_check) {
  s21_decimal result;

  int code = s21_truncate(decimal, &result);
  ck_assert_int_eq(code, TEST_OTHER_OK);
  ck_assert_int_eq(s21_is_equal(result, decimal_check), 1);
}