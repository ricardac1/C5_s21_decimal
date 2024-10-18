#include "../options/options.h"
#include "../s21_decimal.h"
#include "test_main.h"

void test_floor(s21_decimal decimal, s21_decimal decimal_check);
START_TEST(test_floor_ok1) {
  // 79228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok2) {
  // -79228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok3) {
  // 7922816251426433759354395033.5
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 7922816251426433759354395033
  s21_decimal decimal_check = {{0x99999999, 0x99999999, 0x19999999, 0x0}};

  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok4) {
  // -7922816251426433759354395033.5
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -7922816251426433759354395034
  s21_decimal decimal_check = {
      {0x9999999A, 0x99999999, 0x19999999, 0x80000000}};

  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok5) {
  // 792281625142643375935439503.35
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};
  // 792281625142643375935439503
  s21_decimal decimal_check = {{0x28F5C28F, 0xF5C28F5C, 0x28F5C28, 0x0}};

  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok6) {
  // -792281625142643375935439503.35
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80020000}};
  // -792281625142643375935439504
  s21_decimal decimal_check = {{0x28F5C290, 0xF5C28F5C, 0x28F5C28, 0x80000000}};

  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok7) {
  // 79228162514264337593543950.335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x30000}};
  // 79228162514264337593543950
  s21_decimal decimal_check = {{0x9DB22D0E, 0x4BC6A7EF, 0x418937, 0x0}};

  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok8) {
  // 79228162514264337593.543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x90000}};
  // 79228162514264337593
  s21_decimal decimal_check = {{0xB5A52CB9, 0x4B82FA09, 0x4, 0x0}};

  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok9) {
  // -79228162514264337593.543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80090000}};
  // -79228162514264337594
  s21_decimal decimal_check = {{0xB5A52CBA, 0x4B82FA09, 0x4, 0x80000000}};

  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok10) {
  // -792281625142643.37593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};
  // -792281625142644
  s21_decimal decimal_check = {{0x70D42574, 0x2D093, 0x0, 0x80000000}};

  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok11) {
  // 79228162514264.337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF0000}};
  // 79228162514264
  s21_decimal decimal_check = {{0xBE7B9D58, 0x480E, 0x0, 0x0}};

  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok12) {
  // -792281625142.64337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80110000}};
  // -792281625143
  s21_decimal decimal_check = {{0x77AA3237, 0xB8, 0x0, 0x80000000}};

  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok13) {
  // 79228162514.264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x120000}};
  // 79228162514
  s21_decimal decimal_check = {{0x725DD1D2, 0x12, 0x0, 0x0}};

  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok14) {
  // 5.2818775009509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x1C0000}};
  // 5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x0}};

  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok15) {
  // -5.2818775009509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x801C0000}};
  // -6
  s21_decimal decimal_check = {{0x6, 0x0, 0x0, 0x80000000}};

  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok16) {
  // 0.000000000000000000000000000
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x1B0000}};
  // 0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok17) {
  // -0.0000000000000000000000000000
  s21_decimal decimal = {{0x0, 0x0, 0x0, 0x801C0000}};
  // -0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80000000}};

  test_floor(decimal, decimal_check);
}

Suite *suite_floor(void) {
  Suite *s = suite_create("suite_to_floor");
  TCase *tc = tcase_create("to_floor_tc");

  tcase_add_test(tc, test_floor_ok1);
  tcase_add_test(tc, test_floor_ok2);
  tcase_add_test(tc, test_floor_ok3);
  tcase_add_test(tc, test_floor_ok4);
  tcase_add_test(tc, test_floor_ok5);
  tcase_add_test(tc, test_floor_ok6);
  tcase_add_test(tc, test_floor_ok7);
  tcase_add_test(tc, test_floor_ok8);
  tcase_add_test(tc, test_floor_ok9);
  tcase_add_test(tc, test_floor_ok10);
  tcase_add_test(tc, test_floor_ok11);
  tcase_add_test(tc, test_floor_ok12);
  tcase_add_test(tc, test_floor_ok13);
  tcase_add_test(tc, test_floor_ok14);
  tcase_add_test(tc, test_floor_ok15);
  tcase_add_test(tc, test_floor_ok16);
  tcase_add_test(tc, test_floor_ok17);

  suite_add_tcase(s, tc);
  return s;
}

void test_floor(s21_decimal decimal, s21_decimal decimal_check) {
  s21_decimal result;

  int code = s21_floor(decimal, &result);
  ck_assert_int_eq(code, TEST_OTHER_OK);
  ck_assert_int_eq(s21_is_equal(result, decimal_check), 1);
}
