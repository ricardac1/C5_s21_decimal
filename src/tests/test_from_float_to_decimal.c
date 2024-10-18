#include "./../s21_decimal.h"
#include "test_main.h"

START_TEST(s21_from_float_to_decimal_unnormal1) {
  float f = 0.0;
  s21_decimal result;
  s21_decimal check = {{0x0, 0x0, 0x0, 0x0}};

  int code = s21_from_float_to_decimal(f, &result);
  ck_assert_int_eq(code, TEST_OTHER_OK);
  ck_assert_int_eq(s21_is_equal(result, check), 1);
}
END_TEST

START_TEST(s21_from_float_to_decimal_unnormal2) {
  float f = INFINITY;
  s21_decimal result;

  int code = s21_from_float_to_decimal(f, &result);
  ck_assert_int_eq(code, TEST_OTHER_ERROR);
}
END_TEST

START_TEST(s21_from_float_to_decimal_unnormal3) {
  float f = -INFINITY;
  s21_decimal result;

  int code = s21_from_float_to_decimal(f, &result);
  ck_assert_int_eq(code, TEST_OTHER_ERROR);
}
END_TEST

START_TEST(s21_from_float_to_decimal_unnormal4) {
  float f = NAN;
  s21_decimal result;

  int code = s21_from_float_to_decimal(f, &result);
  ck_assert_int_eq(code, TEST_OTHER_ERROR);
}
END_TEST

START_TEST(s21_from_float_to_decimal_unnormal5) {
  float f = -NAN;
  s21_decimal result;

  int code = s21_from_float_to_decimal(f, &result);
  ck_assert_int_eq(code, TEST_OTHER_ERROR);
}
END_TEST

// Тесты на некорректные данные

START_TEST(s21_from_float_to_decimal_incorrect1) {
  float f = 1.0f;
  int code = s21_from_float_to_decimal(f, NULL);

  ck_assert_int_eq(code, TEST_OTHER_ERROR);
}
END_TEST

// Tests for correct data (automatic)

START_TEST(s21_from_float_to_decimal_ok1) {
  // 2.28401628E-19
  int f = 545706772;
  // 0.0000000000000000002284016
  s21_decimal decimal_check = {{0x22D9F0, 0x0, 0x0, 0x190000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(s21_from_float_to_decimal_ok2) {
  // -2.28401628E-19
  int f = -1601776876;
  // -0.0000000000000000002284016
  s21_decimal decimal_check = {{0x22D9F0, 0x0, 0x0, 0x80190000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(s21_from_float_to_decimal_ok3) {
  // 5.92141241E+23
  int f = 1727711253;
  // 592141200000000000000000
  s21_decimal decimal_check = {{0xBF280000, 0x9ED0576, 0x7D64, 0x0}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(s21_from_float_to_decimal_ok4) {
  // -5.92141241E+23
  int f = -419772395;
  // -592141200000000000000000
  s21_decimal decimal_check = {{0xBF280000, 0x9ED0576, 0x7D64, 0x80000000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(s21_from_float_to_decimal_ok5) {
  // 2.1349025E-18
  int f = 572360491;
  // 0.000000000000000002134902
  s21_decimal decimal_check = {{0x209376, 0x0, 0x0, 0x180000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(s21_from_float_to_decimal_ok6) {
  // -2.1349025E-18
  int f = -1575123157;
  // -0.000000000000000002134902
  s21_decimal decimal_check = {{0x209376, 0x0, 0x0, 0x80180000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(s21_from_float_to_decimal_ok7) {
  // 2.38582807E-08
  int f = 852291818;
  // 0.00000002385828
  s21_decimal decimal_check = {{0x2467A4, 0x0, 0x0, 0xE0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(s21_from_float_to_decimal_ok8) {
  // -2.38582807E-08
  int f = -1295191830;
  // -0.00000002385828
  s21_decimal decimal_check = {{0x2467A4, 0x0, 0x0, 0x800E0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(s21_from_float_to_decimal_ok9) {
  // 7.91617864E+11
  int f = 1396199450;
  // 791617900000
  s21_decimal decimal_check = {{0x501A8DE0, 0xB8, 0x0, 0x0}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(s21_from_float_to_decimal_ok10) {
  // -7.91617864E+11
  int f = -751284198;
  // -791617900000
  s21_decimal decimal_check = {{0x501A8DE0, 0xB8, 0x0, 0x80000000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(s21_from_float_to_decimal_ok11) {
  // 1.99102057E+21
  int f = 1658314220;
  // 1991021000000000000000
  s21_decimal decimal_check = {{0x5F048000, 0xEEF78A9E, 0x6B, 0x0}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(s21_from_float_to_decimal_ok12) {
  // -1.99102057E+21
  int f = -489169428;
  // -1991021000000000000000
  s21_decimal decimal_check = {{0x5F048000, 0xEEF78A9E, 0x6B, 0x80000000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(s21_from_float_to_decimal_ok13) {
  // 9.29209423E+24
  int f = 1760949678;
  // 9292094000000000000000000
  s21_decimal decimal_check = {{0xE380000, 0x6CD28004, 0x7AFAD, 0x0}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(s21_from_float_to_decimal_ok14) {
  // -9.29209423E+24
  int f = -386533970;
  // -9292094000000000000000000
  s21_decimal decimal_check = {{0xE380000, 0x6CD28004, 0x7AFAD, 0x80000000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(s21_from_float_to_decimal_ok15) {
  // 0.000115481133
  int f = 955395702;
  // 0.0001154811
  s21_decimal decimal_check = {{0x119EFB, 0x0, 0x0, 0xA0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(s21_from_float_to_decimal_ok16) {
  // -0.000115481133
  int f = -1192087946;
  // -0.0001154811
  s21_decimal decimal_check = {{0x119EFB, 0x0, 0x0, 0x800A0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(s21_from_float_to_decimal_ok17) {
  // 8.66900895E-23
  int f = 449944209;
  // 0.0000000000000000000000866901
  s21_decimal decimal_check = {{0xD3A55, 0x0, 0x0, 0x1C0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(s21_from_float_to_decimal_ok18) {
  // -8.66900895E-23
  int f = -1697539439;
  // -0.0000000000000000000000866901
  s21_decimal decimal_check = {{0xD3A55, 0x0, 0x0, 0x801C0000}};

  test_from_float_to_decimal(f, decimal_check);
}

Suite *from_float_to_decimal(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("from_float_to_decimal");
  tc_core = tcase_create("Core");
  tcase_add_test(tc_core, s21_from_float_to_decimal_ok1);
  tcase_add_test(tc_core, s21_from_float_to_decimal_ok2);
  tcase_add_test(tc_core, s21_from_float_to_decimal_ok3);
  tcase_add_test(tc_core, s21_from_float_to_decimal_ok4);
  tcase_add_test(tc_core, s21_from_float_to_decimal_ok5);
  tcase_add_test(tc_core, s21_from_float_to_decimal_ok6);
  tcase_add_test(tc_core, s21_from_float_to_decimal_ok7);
  tcase_add_test(tc_core, s21_from_float_to_decimal_ok8);
  tcase_add_test(tc_core, s21_from_float_to_decimal_ok9);
  tcase_add_test(tc_core, s21_from_float_to_decimal_ok10);
  tcase_add_test(tc_core, s21_from_float_to_decimal_ok11);
  tcase_add_test(tc_core, s21_from_float_to_decimal_ok12);
  tcase_add_test(tc_core, s21_from_float_to_decimal_ok13);
  tcase_add_test(tc_core, s21_from_float_to_decimal_ok14);
  tcase_add_test(tc_core, s21_from_float_to_decimal_ok15);
  tcase_add_test(tc_core, s21_from_float_to_decimal_ok16);
  tcase_add_test(tc_core, s21_from_float_to_decimal_ok17);
  tcase_add_test(tc_core, s21_from_float_to_decimal_ok18);
  tcase_add_test(tc_core, s21_from_float_to_decimal_incorrect1);
  tcase_add_test(tc_core, s21_from_float_to_decimal_unnormal1);
  tcase_add_test(tc_core, s21_from_float_to_decimal_unnormal2);
  tcase_add_test(tc_core, s21_from_float_to_decimal_unnormal3);
  tcase_add_test(tc_core, s21_from_float_to_decimal_unnormal4);
  tcase_add_test(tc_core, s21_from_float_to_decimal_unnormal5);

  suite_add_tcase(s, tc_core);

  return s;
}

void test_from_float_to_decimal(int f, s21_decimal decimal_check) {
  s21_decimal result;

  float_cast_test cast_float;
  cast_float.int32_bytes = f;

  int code = s21_from_float_to_decimal(cast_float.f, &result);
  ck_assert_int_eq(code, TEST_OTHER_OK);
  ck_assert_int_eq(s21_is_equal(result, decimal_check), 1);
}
