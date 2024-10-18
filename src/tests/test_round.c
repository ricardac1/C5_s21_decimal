#include "../options/options.h"
#include "../s21_decimal.h"
#include "test_main.h"

void test_round(s21_decimal decimal, s21_decimal decimal_check);

START_TEST(test_round_ok1) {
  // 79228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_ok2) {
  // 792281625142643375935439503.35
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};
  // 792281625142643375935439503
  s21_decimal decimal_check = {{0x28F5C28F, 0xF5C28F5C, 0x28F5C28, 0x0}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_ok3) {
  // -7922816251426433759354395.0335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80040000}};
  // -7922816251426433759354395
  s21_decimal decimal_check = {{0x295E9E1B, 0xBAC710CB, 0x68DB8, 0x80000000}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_ok4) {
  // 792281625142643375935439.50335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x50000}};
  // 792281625142643375935440
  s21_decimal decimal_check = {{0x84230FD0, 0xAC471B47, 0xA7C5, 0x0}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_ok5) {
  // 79228162514264337593543.950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x60000}};
  // 79228162514264337593544
  s21_decimal decimal_check = {{0x8D36B4C8, 0xF7A0B5ED, 0x10C6, 0x0}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_ok6) {
  // -79228162.514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80150000}};
  // -79228163
  s21_decimal decimal_check = {{0x4B8ED03, 0x0, 0x0, 0x80000000}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_ok7) {
  // -7922816251.4264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80130000}};
  // -7922816251
  s21_decimal decimal_check = {{0xD83C94FB, 0x1, 0x0, 0x80000000}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_ok8) {
  // 792281625.14264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
  // 792281625
  s21_decimal decimal_check = {{0x2F394219, 0x0, 0x0, 0x0}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_ok9) {
  // 79228162.514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x150000}};
  // 79228163
  s21_decimal decimal_check = {{0x4B8ED03, 0x0, 0x0, 0x0}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_ok10) {
  // -79228162.514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80150000}};
  // -79228163
  s21_decimal decimal_check = {{0x4B8ED03, 0x0, 0x0, 0x80000000}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_fail1) {
  // степень 154 (показатель степени должен быть от 0 до 28)
  // биты 0-15 не нули
  // биты 24-30 не нули
  s21_decimal decimal = {{0, 0, 0, 1000000000}};
  s21_decimal result;

  int code = s21_round(decimal, &result);

  ck_assert_int_eq(code, TEST_OTHER_ERROR);
}
END_TEST

START_TEST(test_round_fail2) {
  // степень 28 (что корректно), но биты 24-30 не нули (старший бит)
  s21_decimal decimal = {{-1, 0, 0, 0x401C0000}};
  s21_decimal result;

  int code = s21_round(decimal, &result);

  ck_assert_int_eq(code, TEST_OTHER_ERROR);
}
END_TEST

START_TEST(test_round_fail3) {
  // Просто все единицы
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF}};
  s21_decimal result;

  int code = s21_round(decimal, &result);

  ck_assert_int_eq(code, TEST_OTHER_ERROR);
}
END_TEST

Suite *suite_round(void) {
  Suite *s = suite_create("suite_to_round");
  TCase *tc = tcase_create("to_round_tc");

  tcase_add_test(tc, test_round_ok1);
  tcase_add_test(tc, test_round_ok2);
  tcase_add_test(tc, test_round_ok3);
  tcase_add_test(tc, test_round_ok4);
  tcase_add_test(tc, test_round_ok5);
  tcase_add_test(tc, test_round_ok6);
  tcase_add_test(tc, test_round_ok7);
  tcase_add_test(tc, test_round_ok8);
  tcase_add_test(tc, test_round_ok9);
  tcase_add_test(tc, test_round_ok10);
  tcase_add_test(tc, test_round_fail1);
  tcase_add_test(tc, test_round_fail2);
  tcase_add_test(tc, test_round_fail3);

  suite_add_tcase(s, tc);
  return s;
}

void test_round(s21_decimal decimal, s21_decimal decimal_check) {
  s21_decimal result;

  int code = s21_round(decimal, &result);
  ck_assert_int_eq(code, TEST_OTHER_OK);
  ck_assert_int_eq(s21_is_equal(result, decimal_check), 1);
}
