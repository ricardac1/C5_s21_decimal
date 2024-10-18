#include "../options/options.h"
#include "../s21_decimal.h"
#include "test_main.h"

void test_negate(s21_decimal decimal, s21_decimal decimal_check);

START_TEST(test_negate_fail1) {
  // 792281625.14264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};

  int code = s21_negate(decimal, NULL);

  ck_assert_int_eq(code, TEST_OTHER_ERROR);
}
END_TEST

START_TEST(test_negate_fail2) {
  // степень 154 (показатель степени должен быть от 0 до 28)
  // биты 0-15 не нули
  // биты 24-30 не нули
  s21_decimal decimal = {{0, 0, 0, 1000000000}};
  s21_decimal result;

  int code = s21_negate(decimal, &result);

  ck_assert_int_eq(code, TEST_OTHER_ERROR);
}
END_TEST

START_TEST(test_negate_fail3) {
  // степень 29 (показатель степени должен быть от 0 до 28)
  s21_decimal decimal = {{-1, 0, 0, 0x1D0000}};
  s21_decimal result;

  int code = s21_negate(decimal, &result);

  ck_assert_int_eq(code, TEST_OTHER_ERROR);
}
END_TEST

START_TEST(test_negate_fail4) {
  // степень 29 (показатель степени должен быть от 0 до 28)
  s21_decimal decimal = {{0, 0, 0, 0x1D0000}};
  s21_decimal result;

  int code = s21_negate(decimal, &result);

  ck_assert_int_eq(code, TEST_OTHER_ERROR);
}
END_TEST

START_TEST(test_negate_fail5) {
  // степень 28 (что корректно), но биты 0-15 не нули (младший бит)
  s21_decimal decimal = {{-1, 0, 0, 0x1C0001}};
  s21_decimal result;

  int code = s21_negate(decimal, &result);

  ck_assert_int_eq(code, TEST_OTHER_ERROR);
}
END_TEST

START_TEST(test_negate_fail6) {
  // степень 28 (что корректно), но биты 0-15 не нули (старший бит)
  s21_decimal decimal = {{-1, 0, 0, 0x1C8000}};
  s21_decimal result;

  int code = s21_negate(decimal, &result);

  ck_assert_int_eq(code, TEST_OTHER_ERROR);
}
END_TEST

START_TEST(test_negate_fail7) {
  // степень 28 (что корректно), но биты 24-30 не нули (младший бит)
  s21_decimal decimal = {{-1, 0, 0, 0x11C0000}};
  s21_decimal result;

  int code = s21_negate(decimal, &result);

  ck_assert_int_eq(code, TEST_OTHER_ERROR);
}
END_TEST

START_TEST(test_negate_fail8) {
  // степень 28 (что корректно), но биты 24-30 не нули (старший бит)
  s21_decimal decimal = {{-1, 0, 0, 0x401C0000}};
  s21_decimal result;

  int code = s21_negate(decimal, &result);

  ck_assert_int_eq(code, TEST_OTHER_ERROR);
}
END_TEST

START_TEST(test_negate_fail9) {
  // Просто все единицы
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF}};
  s21_decimal result;

  int code = s21_negate(decimal, &result);

  ck_assert_int_eq(code, TEST_OTHER_ERROR);
}
END_TEST

START_TEST(test_negate_ok1) {
  // 792281625.14264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
  s21_decimal result;

  int code = s21_negate(decimal, &result);

  ck_assert_int_eq(code, TEST_OTHER_OK);
}
END_TEST

START_TEST(test_negate_ok2) {
  // -743355137752.71190832768620564
  s21_decimal decimal = {{0xC2E01814, 0x66150693, 0xF030E554, 0x80110000}};
  // 743355137752.71190832768620564
  s21_decimal result;

  int code = s21_negate(decimal, &result);

  ck_assert_int_eq(code, TEST_OTHER_OK);
}

START_TEST(test_negate_ok3) {
  // 743355137752.71190832768620564
  s21_decimal decimal = {{0xC2E01814, 0x66150693, 0xF030E554, 0x110000}};
  // -743355137752.71190832768620564
  s21_decimal result;

  int code = s21_negate(decimal, &result);

  ck_assert_int_eq(code, TEST_OTHER_OK);
}
START_TEST(test_negate_ok4) {
  // 1588.6156880717336145015869256
  s21_decimal decimal = {{0x3B780F48, 0x203F2D8C, 0x3354B892, 0x190000}};
  // -1588.6156880717336145015869256
  s21_decimal result;

  int code = s21_negate(decimal, &result);

  ck_assert_int_eq(code, TEST_OTHER_OK);
}
START_TEST(test_negate_ok5) {
  // -1.1288079906187025161270790909
  s21_decimal decimal = {{0xE0E30AFD, 0xDFB7B835, 0x247947E5, 0x801C0000}};
  // 1.1288079906187025161270790909
  s21_decimal result;

  int code = s21_negate(decimal, &result);

  ck_assert_int_eq(code, TEST_OTHER_OK);
}

START_TEST(test_negate_ok6) {
  // 1.000
  s21_decimal decimal = {{0x3E8, 0x0, 0x0, 0x30000}};
  // -1.000
  s21_decimal result;

  int code = s21_negate(decimal, &result);

  ck_assert_int_eq(code, TEST_OTHER_OK);
}

START_TEST(test_negate_ok7) {
  // 1.000
  s21_decimal decimal = {{0x3E8, 0x0, 0x0, 0x30000}};
  // -1.000
  s21_decimal decimal_check = {{0x3E8, 0x0, 0x0, 0x80030000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok8) {
  // -1.00000000000000000000000
  s21_decimal decimal = {{0xF6800000, 0x2C7E14A, 0x152D, 0x80170000}};
  // 1.00000000000000000000000
  s21_decimal decimal_check = {{0xF6800000, 0x2C7E14A, 0x152D, 0x170000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok9) {
  // -31872.184105126612003502230073
  s21_decimal decimal = {{0x70110A39, 0x6E8B37A6, 0x66FC0D82, 0x80180000}};
  // 31872.184105126612003502230073
  s21_decimal decimal_check = {{0x70110A39, 0x6E8B37A6, 0x66FC0D82, 0x180000}};

  test_negate(decimal, decimal_check);
}

Suite *suite_negate(void) {
  Suite *s = suite_create("suite_to_negate");
  TCase *tc = tcase_create("to_negate_tc");

  tcase_add_test(tc, test_negate_fail1);
  tcase_add_test(tc, test_negate_fail2);
  tcase_add_test(tc, test_negate_fail3);
  tcase_add_test(tc, test_negate_fail4);
  tcase_add_test(tc, test_negate_fail5);
  tcase_add_test(tc, test_negate_fail6);
  tcase_add_test(tc, test_negate_fail7);
  tcase_add_test(tc, test_negate_fail8);
  tcase_add_test(tc, test_negate_fail9);
  tcase_add_test(tc, test_negate_ok1);
  tcase_add_test(tc, test_negate_ok2);
  tcase_add_test(tc, test_negate_ok3);
  tcase_add_test(tc, test_negate_ok4);
  tcase_add_test(tc, test_negate_ok5);
  tcase_add_test(tc, test_negate_ok6);
  tcase_add_test(tc, test_negate_ok7);
  tcase_add_test(tc, test_negate_ok8);
  tcase_add_test(tc, test_negate_ok9);

  suite_add_tcase(s, tc);
  return s;
}

void test_negate(s21_decimal decimal, s21_decimal decimal_check) {
  s21_decimal result;

  int code = s21_negate(decimal, &result);
  int sign_check = s21_decimal_get_sign(decimal_check);
  int sign_result = s21_decimal_get_sign(result);

  ck_assert_int_eq(code, TEST_OTHER_OK);
  ck_assert_int_eq(sign_check, sign_result);
}
