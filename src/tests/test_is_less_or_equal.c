#include "../s21_decimal.h"
#include "test_main.h"

void test_is_less_or_equal(s21_decimal decimal1, s21_decimal decimal2,
                           int check) {
  int code = s21_is_less_or_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

START_TEST(test_is_less_or_equal_ok1) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok2) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok3) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok5) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok6) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok7) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok8) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok9) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok10) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok11) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok12) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok13) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok14) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok15) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok16) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok17) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok18) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok19) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok20) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok21) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok22) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok23) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok24) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok25) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok26) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok27) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok28) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok29) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok30) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok31) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok32) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok33) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok34) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok35) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok36) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok37) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok38) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok39) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok40) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok41) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok42) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok43) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok44) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok45) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok46) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok47) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok48) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok49) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok50) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok51) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok52) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok53) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok54) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok55) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok56) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok57) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok58) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok59) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok60) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok61) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok62) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok63) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok64) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok65) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok66) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok67) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok68) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok69) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok70) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok71) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok72) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok73) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok74) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok75) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok76) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok77) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok78) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok79) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok80) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok81) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok82) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok83) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok84) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok85) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok86) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok87) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok88) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok89) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok90) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok91) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok92) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok93) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok94) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok95) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok96) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok97) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok98) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok99) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok100) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok101) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -4.7074769154693434325056864883
  s21_decimal decimal2 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x801C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok102) {
  // -4.7074769154693434325056864883
  s21_decimal decimal1 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok103) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 4.7074769154693434325056864883
  s21_decimal decimal2 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x1C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok104) {
  // 4.7074769154693434325056864883
  s21_decimal decimal1 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok105) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 24054676222594164633554651068
  s21_decimal decimal2 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok106) {
  // 24054676222594164633554651068
  s21_decimal decimal1 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok107) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -24054676222594164633554651068
  s21_decimal decimal2 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok108) {
  // -24054676222594164633554651068
  s21_decimal decimal1 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok109) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 30667538544853.855676101018067
  s21_decimal decimal2 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0xF0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok110) {
  // 30667538544853.855676101018067
  s21_decimal decimal1 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0xF0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok111) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -30667538544853.855676101018067
  s21_decimal decimal2 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0x800F0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok112) {
  // -30667538544853.855676101018067
  s21_decimal decimal1 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0x800F0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok113) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok114) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok115) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok116) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok117) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok118) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok119) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok120) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok121) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok122) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok123) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok124) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok125) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok126) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok127) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok128) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok129) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok130) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok131) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok132) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok133) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok134) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok135) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok136) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok137) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok138) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok139) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok140) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok141) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok142) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok143) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok144) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok145) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok146) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok147) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok148) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok149) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok150) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok151) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok152) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok153) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok154) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok155) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok156) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok157) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok158) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok159) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok160) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok161) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok162) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok163) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok164) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok165) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok166) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok167) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok168) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok169) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok170) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok171) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok172) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok173) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok174) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok175) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok176) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok177) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok178) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok179) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok180) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok181) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok182) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok183) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok184) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok185) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok186) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok187) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok188) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok189) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok190) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok191) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok192) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok193) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok194) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok195) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok196) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok197) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok198) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok199) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok200) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok201) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok202) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok203) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok204) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok205) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok206) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok207) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok208) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok209) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok210) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok211) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok212) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok213) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -4.7074769154693434325056864883
  s21_decimal decimal2 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x801C0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok214) {
  // -4.7074769154693434325056864883
  s21_decimal decimal1 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok215) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 4.7074769154693434325056864883
  s21_decimal decimal2 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x1C0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok216) {
  // 4.7074769154693434325056864883
  s21_decimal decimal1 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok217) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 24054676222594164633554651068
  s21_decimal decimal2 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok218) {
  // 24054676222594164633554651068
  s21_decimal decimal1 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok219) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -24054676222594164633554651068
  s21_decimal decimal2 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok220) {
  // -24054676222594164633554651068
  s21_decimal decimal1 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok221) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 30667538544853.855676101018067
  s21_decimal decimal2 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0xF0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok222) {
  // 30667538544853.855676101018067
  s21_decimal decimal1 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0xF0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok223) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -30667538544853.855676101018067
  s21_decimal decimal2 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0x800F0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok224) {
  // -30667538544853.855676101018067
  s21_decimal decimal1 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0x800F0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok225) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok226) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok227) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok228) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok229) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok230) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok231) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok232) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok233) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok234) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok235) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok236) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok237) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok238) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok239) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok240) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok241) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok242) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok243) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok244) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok245) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok246) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok247) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok248) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok249) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok250) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok251) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok252) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok253) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok254) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok255) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok256) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok257) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok258) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok259) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok260) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok261) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok262) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok263) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok264) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok265) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok266) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok267) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok268) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok269) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok270) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok271) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok272) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok273) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok274) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok275) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok276) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok277) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok278) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok279) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok280) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok281) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok282) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok283) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok284) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok285) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok286) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok287) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok288) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok289) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok290) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok291) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok292) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok293) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok294) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok295) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok296) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok297) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok298) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok299) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok300) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok301) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok302) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok303) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok304) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok305) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok306) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok307) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok308) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok309) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok310) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok311) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok312) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok313) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok314) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok315) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok316) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok317) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok318) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok319) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok320) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok321) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok322) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok323) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok324) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok325) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -4.7074769154693434325056864883
  s21_decimal decimal2 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x801C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok326) {
  // -4.7074769154693434325056864883
  s21_decimal decimal1 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x801C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok327) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 4.7074769154693434325056864883
  s21_decimal decimal2 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x1C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok328) {
  // 4.7074769154693434325056864883
  s21_decimal decimal1 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x1C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok329) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 24054676222594164633554651068
  s21_decimal decimal2 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok330) {
  // 24054676222594164633554651068
  s21_decimal decimal1 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok331) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -24054676222594164633554651068
  s21_decimal decimal2 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok332) {
  // -24054676222594164633554651068
  s21_decimal decimal1 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok333) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 30667538544853.855676101018067
  s21_decimal decimal2 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0xF0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok334) {
  // 30667538544853.855676101018067
  s21_decimal decimal1 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0xF0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok335) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -30667538544853.855676101018067
  s21_decimal decimal2 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0x800F0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok336) {
  // -30667538544853.855676101018067
  s21_decimal decimal1 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0x800F0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok337) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok338) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok339) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok340) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok341) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok342) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok343) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok344) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok345) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok346) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok347) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok348) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok349) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok350) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok351) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok352) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok353) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok354) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok355) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok356) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok357) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok358) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok359) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok360) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok361) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok362) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok363) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok364) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok365) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok366) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok367) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok368) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok369) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok370) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok371) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok372) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok373) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok374) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok375) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok376) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok377) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok378) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok379) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok380) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok381) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok382) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok383) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok384) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok385) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok386) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok387) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok388) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok389) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok390) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok391) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok392) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok393) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok394) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok395) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok396) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok397) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok398) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok399) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok400) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok401) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok402) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok403) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok404) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok405) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok406) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok407) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok408) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok409) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok410) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok411) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok412) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok413) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok414) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok415) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok416) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok417) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok418) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok419) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok420) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok421) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok422) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok423) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok424) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok425) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok426) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok427) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok428) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok429) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok430) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok431) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok432) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok433) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok434) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok435) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok436) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok437) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -4.7074769154693434325056864883
  s21_decimal decimal2 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x801C0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok438) {
  // -4.7074769154693434325056864883
  s21_decimal decimal1 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x801C0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok439) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 4.7074769154693434325056864883
  s21_decimal decimal2 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x1C0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok440) {
  // 4.7074769154693434325056864883
  s21_decimal decimal1 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x1C0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok441) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 24054676222594164633554651068
  s21_decimal decimal2 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok442) {
  // 24054676222594164633554651068
  s21_decimal decimal1 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok443) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -24054676222594164633554651068
  s21_decimal decimal2 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok444) {
  // -24054676222594164633554651068
  s21_decimal decimal1 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok445) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 30667538544853.855676101018067
  s21_decimal decimal2 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0xF0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok446) {
  // 30667538544853.855676101018067
  s21_decimal decimal1 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0xF0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok447) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -30667538544853.855676101018067
  s21_decimal decimal2 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0x800F0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok448) {
  // -30667538544853.855676101018067
  s21_decimal decimal1 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0x800F0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok449) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok450) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok451) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok452) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok453) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok454) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok455) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok456) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok457) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok458) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok459) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok460) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok461) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok462) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok463) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok464) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok465) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok466) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok467) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok468) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok469) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok470) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok471) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok472) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok473) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok474) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok475) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok476) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok477) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok478) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok479) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok480) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok481) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok482) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok483) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok484) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok485) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok486) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok487) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok488) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok489) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok490) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok491) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok492) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok493) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok494) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok495) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok496) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok497) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok498) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok499) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok500) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok501) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok502) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok503) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok504) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok505) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok506) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok507) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok508) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok509) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok510) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok511) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok512) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok513) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok514) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok515) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok516) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok517) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok518) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok519) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok520) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok521) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok522) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok523) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok524) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok525) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok526) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok527) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok528) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok529) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok530) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok531) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok532) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok533) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok534) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok535) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok536) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok537) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok538) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok539) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok540) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok541) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok542) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok543) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok544) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok545) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok546) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok547) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok548) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok549) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -4.7074769154693434325056864883
  s21_decimal decimal2 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x801C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok550) {
  // -4.7074769154693434325056864883
  s21_decimal decimal1 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x801C0000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok551) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 4.7074769154693434325056864883
  s21_decimal decimal2 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x1C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok552) {
  // 4.7074769154693434325056864883
  s21_decimal decimal1 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x1C0000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok553) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 24054676222594164633554651068
  s21_decimal decimal2 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok554) {
  // 24054676222594164633554651068
  s21_decimal decimal1 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok555) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -24054676222594164633554651068
  s21_decimal decimal2 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok556) {
  // -24054676222594164633554651068
  s21_decimal decimal1 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok557) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 30667538544853.855676101018067
  s21_decimal decimal2 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0xF0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok558) {
  // 30667538544853.855676101018067
  s21_decimal decimal1 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0xF0000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok559) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -30667538544853.855676101018067
  s21_decimal decimal2 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0x800F0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok560) {
  // -30667538544853.855676101018067
  s21_decimal decimal1 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0x800F0000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok561) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok562) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok563) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok564) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok565) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok566) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok567) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok568) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok569) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok570) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok571) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok572) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok573) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok574) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok575) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok576) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok577) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok578) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok579) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok580) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok581) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok582) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok583) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok584) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok585) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok586) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok587) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok588) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok589) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok590) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok591) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok592) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok593) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok594) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok595) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok596) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok597) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok598) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok599) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok600) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok601) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok602) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok603) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok604) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok605) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok606) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok607) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok608) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok609) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok610) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok611) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok612) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok613) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok614) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok615) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok616) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok617) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok618) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok619) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok620) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok621) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok622) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok623) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok624) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok625) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok626) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok627) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok628) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok629) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok630) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok631) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok632) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok633) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok634) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok635) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok636) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok637) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok638) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok639) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok640) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok641) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok642) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok643) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok644) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok645) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok646) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok647) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok648) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok649) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok650) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok651) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok652) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok653) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok654) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok655) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok656) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok657) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok658) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok659) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok660) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok661) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -4.7074769154693434325056864883
  s21_decimal decimal2 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x801C0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok662) {
  // -4.7074769154693434325056864883
  s21_decimal decimal1 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x801C0000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok663) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 4.7074769154693434325056864883
  s21_decimal decimal2 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x1C0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok664) {
  // 4.7074769154693434325056864883
  s21_decimal decimal1 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x1C0000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok665) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 24054676222594164633554651068
  s21_decimal decimal2 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok666) {
  // 24054676222594164633554651068
  s21_decimal decimal1 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok667) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -24054676222594164633554651068
  s21_decimal decimal2 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x80000000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok668) {
  // -24054676222594164633554651068
  s21_decimal decimal1 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok669) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 30667538544853.855676101018067
  s21_decimal decimal2 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0xF0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok670) {
  // 30667538544853.855676101018067
  s21_decimal decimal1 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0xF0000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok671) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -30667538544853.855676101018067
  s21_decimal decimal2 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0x800F0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok672) {
  // -30667538544853.855676101018067
  s21_decimal decimal1 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0x800F0000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok673) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok674) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok675) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok676) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok677) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok678) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok679) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok680) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok681) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok682) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok683) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok684) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok685) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok686) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok687) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok688) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok689) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok690) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok691) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok692) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok693) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok694) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok695) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok696) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok697) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok698) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok699) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok700) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok703) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok704) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok705) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok706) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok707) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok708) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok709) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok710) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok711) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok712) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok713) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok714) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok715) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok716) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok717) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok718) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok719) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok720) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok721) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok722) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok723) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok724) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok725) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok726) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok727) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok728) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok729) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok730) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok731) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok732) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok733) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok734) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok735) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok736) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok737) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 58391.31040040850204230282817
  s21_decimal decimal2 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x170000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok738) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok739) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok740) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok741) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok742) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok743) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok744) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok745) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok746) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok747) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok748) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok749) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok750) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok751) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok752) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok753) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 58391.31040040850204230282817
  s21_decimal decimal2 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x170000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok754) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 58391.31040040850204230282817
  s21_decimal decimal2 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x170000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok755) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok756) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok757) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok758) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok759) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok760) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok761) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok762) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok763) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok764) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok765) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok766) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok767) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok768) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok769) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok770) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok771) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok772) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok773) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -4.7074769154693434325056864883
  s21_decimal decimal2 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x801C0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok774) {
  // -4.7074769154693434325056864883
  s21_decimal decimal1 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x801C0000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok779) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -24054676222594164633554651068
  s21_decimal decimal2 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok780) {
  // -24054676222594164633554651068
  s21_decimal decimal1 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok781) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 30667538544853.855676101018067
  s21_decimal decimal2 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0xF0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok782) {
  // 30667538544853.855676101018067
  s21_decimal decimal1 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0xF0000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok783) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -30667538544853.855676101018067
  s21_decimal decimal2 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0x800F0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok784) {
  // -30667538544853.855676101018067
  s21_decimal decimal1 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0x800F0000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok785) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok786) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok787) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok788) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok789) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok790) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok791) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok792) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok793) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok794) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok795) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok796) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok797) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok798) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = TEST_COMPARE_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok799) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok800) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = TEST_COMPARE_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

Suite *is_less_or_equal_suite1(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("is_less_or_equal_suite1");
  tc_core = tcase_create("Core");
  tcase_add_test(tc_core, test_is_less_or_equal_ok1);
  tcase_add_test(tc_core, test_is_less_or_equal_ok2);
  tcase_add_test(tc_core, test_is_less_or_equal_ok3);
  tcase_add_test(tc_core, test_is_less_or_equal_ok4);
  tcase_add_test(tc_core, test_is_less_or_equal_ok5);
  tcase_add_test(tc_core, test_is_less_or_equal_ok6);
  tcase_add_test(tc_core, test_is_less_or_equal_ok7);
  tcase_add_test(tc_core, test_is_less_or_equal_ok8);
  tcase_add_test(tc_core, test_is_less_or_equal_ok9);
  tcase_add_test(tc_core, test_is_less_or_equal_ok10);
  tcase_add_test(tc_core, test_is_less_or_equal_ok11);
  tcase_add_test(tc_core, test_is_less_or_equal_ok12);
  tcase_add_test(tc_core, test_is_less_or_equal_ok13);
  tcase_add_test(tc_core, test_is_less_or_equal_ok14);
  tcase_add_test(tc_core, test_is_less_or_equal_ok15);
  tcase_add_test(tc_core, test_is_less_or_equal_ok16);
  tcase_add_test(tc_core, test_is_less_or_equal_ok17);
  tcase_add_test(tc_core, test_is_less_or_equal_ok18);
  tcase_add_test(tc_core, test_is_less_or_equal_ok19);
  tcase_add_test(tc_core, test_is_less_or_equal_ok20);
  tcase_add_test(tc_core, test_is_less_or_equal_ok21);
  tcase_add_test(tc_core, test_is_less_or_equal_ok22);
  tcase_add_test(tc_core, test_is_less_or_equal_ok23);
  tcase_add_test(tc_core, test_is_less_or_equal_ok24);
  tcase_add_test(tc_core, test_is_less_or_equal_ok25);
  tcase_add_test(tc_core, test_is_less_or_equal_ok26);
  tcase_add_test(tc_core, test_is_less_or_equal_ok27);
  tcase_add_test(tc_core, test_is_less_or_equal_ok28);
  tcase_add_test(tc_core, test_is_less_or_equal_ok29);
  tcase_add_test(tc_core, test_is_less_or_equal_ok30);
  tcase_add_test(tc_core, test_is_less_or_equal_ok31);
  tcase_add_test(tc_core, test_is_less_or_equal_ok32);
  tcase_add_test(tc_core, test_is_less_or_equal_ok33);
  tcase_add_test(tc_core, test_is_less_or_equal_ok34);
  tcase_add_test(tc_core, test_is_less_or_equal_ok35);
  tcase_add_test(tc_core, test_is_less_or_equal_ok36);
  tcase_add_test(tc_core, test_is_less_or_equal_ok37);
  tcase_add_test(tc_core, test_is_less_or_equal_ok38);
  tcase_add_test(tc_core, test_is_less_or_equal_ok39);
  tcase_add_test(tc_core, test_is_less_or_equal_ok40);
  tcase_add_test(tc_core, test_is_less_or_equal_ok41);
  tcase_add_test(tc_core, test_is_less_or_equal_ok42);
  tcase_add_test(tc_core, test_is_less_or_equal_ok43);
  tcase_add_test(tc_core, test_is_less_or_equal_ok44);
  tcase_add_test(tc_core, test_is_less_or_equal_ok45);
  tcase_add_test(tc_core, test_is_less_or_equal_ok46);
  tcase_add_test(tc_core, test_is_less_or_equal_ok47);
  tcase_add_test(tc_core, test_is_less_or_equal_ok48);
  tcase_add_test(tc_core, test_is_less_or_equal_ok49);
  tcase_add_test(tc_core, test_is_less_or_equal_ok50);
  tcase_add_test(tc_core, test_is_less_or_equal_ok51);
  tcase_add_test(tc_core, test_is_less_or_equal_ok52);
  tcase_add_test(tc_core, test_is_less_or_equal_ok53);
  tcase_add_test(tc_core, test_is_less_or_equal_ok54);
  tcase_add_test(tc_core, test_is_less_or_equal_ok55);
  tcase_add_test(tc_core, test_is_less_or_equal_ok56);
  tcase_add_test(tc_core, test_is_less_or_equal_ok57);
  tcase_add_test(tc_core, test_is_less_or_equal_ok58);
  tcase_add_test(tc_core, test_is_less_or_equal_ok59);
  tcase_add_test(tc_core, test_is_less_or_equal_ok60);
  tcase_add_test(tc_core, test_is_less_or_equal_ok61);
  tcase_add_test(tc_core, test_is_less_or_equal_ok62);
  tcase_add_test(tc_core, test_is_less_or_equal_ok63);
  tcase_add_test(tc_core, test_is_less_or_equal_ok64);
  tcase_add_test(tc_core, test_is_less_or_equal_ok65);
  tcase_add_test(tc_core, test_is_less_or_equal_ok66);
  tcase_add_test(tc_core, test_is_less_or_equal_ok67);
  tcase_add_test(tc_core, test_is_less_or_equal_ok68);
  tcase_add_test(tc_core, test_is_less_or_equal_ok69);
  tcase_add_test(tc_core, test_is_less_or_equal_ok70);
  tcase_add_test(tc_core, test_is_less_or_equal_ok71);
  tcase_add_test(tc_core, test_is_less_or_equal_ok72);
  tcase_add_test(tc_core, test_is_less_or_equal_ok73);
  tcase_add_test(tc_core, test_is_less_or_equal_ok74);
  tcase_add_test(tc_core, test_is_less_or_equal_ok75);
  tcase_add_test(tc_core, test_is_less_or_equal_ok76);
  tcase_add_test(tc_core, test_is_less_or_equal_ok77);
  tcase_add_test(tc_core, test_is_less_or_equal_ok78);
  tcase_add_test(tc_core, test_is_less_or_equal_ok79);
  tcase_add_test(tc_core, test_is_less_or_equal_ok80);
  tcase_add_test(tc_core, test_is_less_or_equal_ok81);
  tcase_add_test(tc_core, test_is_less_or_equal_ok82);
  tcase_add_test(tc_core, test_is_less_or_equal_ok83);
  tcase_add_test(tc_core, test_is_less_or_equal_ok84);
  tcase_add_test(tc_core, test_is_less_or_equal_ok85);
  tcase_add_test(tc_core, test_is_less_or_equal_ok86);
  tcase_add_test(tc_core, test_is_less_or_equal_ok87);
  tcase_add_test(tc_core, test_is_less_or_equal_ok88);
  tcase_add_test(tc_core, test_is_less_or_equal_ok89);
  tcase_add_test(tc_core, test_is_less_or_equal_ok90);
  tcase_add_test(tc_core, test_is_less_or_equal_ok91);
  tcase_add_test(tc_core, test_is_less_or_equal_ok92);
  tcase_add_test(tc_core, test_is_less_or_equal_ok93);
  tcase_add_test(tc_core, test_is_less_or_equal_ok94);
  tcase_add_test(tc_core, test_is_less_or_equal_ok95);
  tcase_add_test(tc_core, test_is_less_or_equal_ok96);
  tcase_add_test(tc_core, test_is_less_or_equal_ok97);
  tcase_add_test(tc_core, test_is_less_or_equal_ok98);
  tcase_add_test(tc_core, test_is_less_or_equal_ok99);
  tcase_add_test(tc_core, test_is_less_or_equal_ok100);
  tcase_add_test(tc_core, test_is_less_or_equal_ok101);
  tcase_add_test(tc_core, test_is_less_or_equal_ok102);
  tcase_add_test(tc_core, test_is_less_or_equal_ok103);
  tcase_add_test(tc_core, test_is_less_or_equal_ok104);
  tcase_add_test(tc_core, test_is_less_or_equal_ok105);
  tcase_add_test(tc_core, test_is_less_or_equal_ok106);
  tcase_add_test(tc_core, test_is_less_or_equal_ok107);
  tcase_add_test(tc_core, test_is_less_or_equal_ok108);
  tcase_add_test(tc_core, test_is_less_or_equal_ok109);
  tcase_add_test(tc_core, test_is_less_or_equal_ok110);
  tcase_add_test(tc_core, test_is_less_or_equal_ok111);
  tcase_add_test(tc_core, test_is_less_or_equal_ok112);
  tcase_add_test(tc_core, test_is_less_or_equal_ok113);
  tcase_add_test(tc_core, test_is_less_or_equal_ok114);
  tcase_add_test(tc_core, test_is_less_or_equal_ok115);
  tcase_add_test(tc_core, test_is_less_or_equal_ok116);
  tcase_add_test(tc_core, test_is_less_or_equal_ok117);
  tcase_add_test(tc_core, test_is_less_or_equal_ok118);
  tcase_add_test(tc_core, test_is_less_or_equal_ok119);
  tcase_add_test(tc_core, test_is_less_or_equal_ok120);
  tcase_add_test(tc_core, test_is_less_or_equal_ok121);
  tcase_add_test(tc_core, test_is_less_or_equal_ok122);
  tcase_add_test(tc_core, test_is_less_or_equal_ok123);
  tcase_add_test(tc_core, test_is_less_or_equal_ok124);
  tcase_add_test(tc_core, test_is_less_or_equal_ok125);
  tcase_add_test(tc_core, test_is_less_or_equal_ok126);
  tcase_add_test(tc_core, test_is_less_or_equal_ok127);
  tcase_add_test(tc_core, test_is_less_or_equal_ok128);
  tcase_add_test(tc_core, test_is_less_or_equal_ok129);
  tcase_add_test(tc_core, test_is_less_or_equal_ok130);
  tcase_add_test(tc_core, test_is_less_or_equal_ok131);
  tcase_add_test(tc_core, test_is_less_or_equal_ok132);
  tcase_add_test(tc_core, test_is_less_or_equal_ok133);
  tcase_add_test(tc_core, test_is_less_or_equal_ok134);
  tcase_add_test(tc_core, test_is_less_or_equal_ok135);
  tcase_add_test(tc_core, test_is_less_or_equal_ok136);
  tcase_add_test(tc_core, test_is_less_or_equal_ok137);
  tcase_add_test(tc_core, test_is_less_or_equal_ok138);
  tcase_add_test(tc_core, test_is_less_or_equal_ok139);
  tcase_add_test(tc_core, test_is_less_or_equal_ok140);
  tcase_add_test(tc_core, test_is_less_or_equal_ok141);
  tcase_add_test(tc_core, test_is_less_or_equal_ok142);
  tcase_add_test(tc_core, test_is_less_or_equal_ok143);
  tcase_add_test(tc_core, test_is_less_or_equal_ok144);
  tcase_add_test(tc_core, test_is_less_or_equal_ok145);
  tcase_add_test(tc_core, test_is_less_or_equal_ok146);
  tcase_add_test(tc_core, test_is_less_or_equal_ok147);
  tcase_add_test(tc_core, test_is_less_or_equal_ok148);
  tcase_add_test(tc_core, test_is_less_or_equal_ok149);
  tcase_add_test(tc_core, test_is_less_or_equal_ok150);
  tcase_add_test(tc_core, test_is_less_or_equal_ok151);
  tcase_add_test(tc_core, test_is_less_or_equal_ok152);
  tcase_add_test(tc_core, test_is_less_or_equal_ok153);
  tcase_add_test(tc_core, test_is_less_or_equal_ok154);
  tcase_add_test(tc_core, test_is_less_or_equal_ok155);
  tcase_add_test(tc_core, test_is_less_or_equal_ok156);
  tcase_add_test(tc_core, test_is_less_or_equal_ok157);
  tcase_add_test(tc_core, test_is_less_or_equal_ok158);
  tcase_add_test(tc_core, test_is_less_or_equal_ok159);
  tcase_add_test(tc_core, test_is_less_or_equal_ok160);
  tcase_add_test(tc_core, test_is_less_or_equal_ok161);
  tcase_add_test(tc_core, test_is_less_or_equal_ok162);
  tcase_add_test(tc_core, test_is_less_or_equal_ok163);
  tcase_add_test(tc_core, test_is_less_or_equal_ok164);
  tcase_add_test(tc_core, test_is_less_or_equal_ok165);
  tcase_add_test(tc_core, test_is_less_or_equal_ok166);
  tcase_add_test(tc_core, test_is_less_or_equal_ok167);
  tcase_add_test(tc_core, test_is_less_or_equal_ok168);
  tcase_add_test(tc_core, test_is_less_or_equal_ok169);
  tcase_add_test(tc_core, test_is_less_or_equal_ok170);
  tcase_add_test(tc_core, test_is_less_or_equal_ok171);
  tcase_add_test(tc_core, test_is_less_or_equal_ok172);
  tcase_add_test(tc_core, test_is_less_or_equal_ok173);
  tcase_add_test(tc_core, test_is_less_or_equal_ok174);
  tcase_add_test(tc_core, test_is_less_or_equal_ok175);
  tcase_add_test(tc_core, test_is_less_or_equal_ok176);
  tcase_add_test(tc_core, test_is_less_or_equal_ok177);
  tcase_add_test(tc_core, test_is_less_or_equal_ok178);
  tcase_add_test(tc_core, test_is_less_or_equal_ok179);
  tcase_add_test(tc_core, test_is_less_or_equal_ok180);
  tcase_add_test(tc_core, test_is_less_or_equal_ok181);
  tcase_add_test(tc_core, test_is_less_or_equal_ok182);
  tcase_add_test(tc_core, test_is_less_or_equal_ok183);
  tcase_add_test(tc_core, test_is_less_or_equal_ok184);
  tcase_add_test(tc_core, test_is_less_or_equal_ok185);
  tcase_add_test(tc_core, test_is_less_or_equal_ok186);
  tcase_add_test(tc_core, test_is_less_or_equal_ok187);
  tcase_add_test(tc_core, test_is_less_or_equal_ok188);
  tcase_add_test(tc_core, test_is_less_or_equal_ok189);
  tcase_add_test(tc_core, test_is_less_or_equal_ok190);
  tcase_add_test(tc_core, test_is_less_or_equal_ok191);
  tcase_add_test(tc_core, test_is_less_or_equal_ok192);
  tcase_add_test(tc_core, test_is_less_or_equal_ok193);
  tcase_add_test(tc_core, test_is_less_or_equal_ok194);
  tcase_add_test(tc_core, test_is_less_or_equal_ok195);
  tcase_add_test(tc_core, test_is_less_or_equal_ok196);
  tcase_add_test(tc_core, test_is_less_or_equal_ok197);
  tcase_add_test(tc_core, test_is_less_or_equal_ok198);
  tcase_add_test(tc_core, test_is_less_or_equal_ok199);
  tcase_add_test(tc_core, test_is_less_or_equal_ok200);
  tcase_add_test(tc_core, test_is_less_or_equal_ok201);
  tcase_add_test(tc_core, test_is_less_or_equal_ok202);
  tcase_add_test(tc_core, test_is_less_or_equal_ok203);
  tcase_add_test(tc_core, test_is_less_or_equal_ok204);
  tcase_add_test(tc_core, test_is_less_or_equal_ok205);
  tcase_add_test(tc_core, test_is_less_or_equal_ok206);
  tcase_add_test(tc_core, test_is_less_or_equal_ok207);
  tcase_add_test(tc_core, test_is_less_or_equal_ok208);
  tcase_add_test(tc_core, test_is_less_or_equal_ok209);
  tcase_add_test(tc_core, test_is_less_or_equal_ok210);
  tcase_add_test(tc_core, test_is_less_or_equal_ok211);
  tcase_add_test(tc_core, test_is_less_or_equal_ok212);
  tcase_add_test(tc_core, test_is_less_or_equal_ok213);
  tcase_add_test(tc_core, test_is_less_or_equal_ok214);
  tcase_add_test(tc_core, test_is_less_or_equal_ok215);
  tcase_add_test(tc_core, test_is_less_or_equal_ok216);
  tcase_add_test(tc_core, test_is_less_or_equal_ok217);
  tcase_add_test(tc_core, test_is_less_or_equal_ok218);
  tcase_add_test(tc_core, test_is_less_or_equal_ok219);
  tcase_add_test(tc_core, test_is_less_or_equal_ok220);
  tcase_add_test(tc_core, test_is_less_or_equal_ok221);
  tcase_add_test(tc_core, test_is_less_or_equal_ok222);
  tcase_add_test(tc_core, test_is_less_or_equal_ok223);
  tcase_add_test(tc_core, test_is_less_or_equal_ok224);
  tcase_add_test(tc_core, test_is_less_or_equal_ok225);
  tcase_add_test(tc_core, test_is_less_or_equal_ok226);
  tcase_add_test(tc_core, test_is_less_or_equal_ok227);
  tcase_add_test(tc_core, test_is_less_or_equal_ok228);
  tcase_add_test(tc_core, test_is_less_or_equal_ok229);
  tcase_add_test(tc_core, test_is_less_or_equal_ok230);
  tcase_add_test(tc_core, test_is_less_or_equal_ok231);
  tcase_add_test(tc_core, test_is_less_or_equal_ok232);
  tcase_add_test(tc_core, test_is_less_or_equal_ok233);
  tcase_add_test(tc_core, test_is_less_or_equal_ok234);
  tcase_add_test(tc_core, test_is_less_or_equal_ok235);
  tcase_add_test(tc_core, test_is_less_or_equal_ok236);
  tcase_add_test(tc_core, test_is_less_or_equal_ok237);
  tcase_add_test(tc_core, test_is_less_or_equal_ok238);
  tcase_add_test(tc_core, test_is_less_or_equal_ok239);
  tcase_add_test(tc_core, test_is_less_or_equal_ok240);
  tcase_add_test(tc_core, test_is_less_or_equal_ok241);
  tcase_add_test(tc_core, test_is_less_or_equal_ok242);
  tcase_add_test(tc_core, test_is_less_or_equal_ok243);
  tcase_add_test(tc_core, test_is_less_or_equal_ok244);
  tcase_add_test(tc_core, test_is_less_or_equal_ok245);
  tcase_add_test(tc_core, test_is_less_or_equal_ok246);
  tcase_add_test(tc_core, test_is_less_or_equal_ok247);
  tcase_add_test(tc_core, test_is_less_or_equal_ok248);
  tcase_add_test(tc_core, test_is_less_or_equal_ok249);
  tcase_add_test(tc_core, test_is_less_or_equal_ok250);
  tcase_add_test(tc_core, test_is_less_or_equal_ok251);
  tcase_add_test(tc_core, test_is_less_or_equal_ok252);
  tcase_add_test(tc_core, test_is_less_or_equal_ok253);
  tcase_add_test(tc_core, test_is_less_or_equal_ok254);
  tcase_add_test(tc_core, test_is_less_or_equal_ok255);
  tcase_add_test(tc_core, test_is_less_or_equal_ok256);
  tcase_add_test(tc_core, test_is_less_or_equal_ok257);
  tcase_add_test(tc_core, test_is_less_or_equal_ok258);
  tcase_add_test(tc_core, test_is_less_or_equal_ok259);
  tcase_add_test(tc_core, test_is_less_or_equal_ok260);
  tcase_add_test(tc_core, test_is_less_or_equal_ok261);
  tcase_add_test(tc_core, test_is_less_or_equal_ok262);
  tcase_add_test(tc_core, test_is_less_or_equal_ok263);
  tcase_add_test(tc_core, test_is_less_or_equal_ok264);
  tcase_add_test(tc_core, test_is_less_or_equal_ok265);
  tcase_add_test(tc_core, test_is_less_or_equal_ok266);
  tcase_add_test(tc_core, test_is_less_or_equal_ok267);
  tcase_add_test(tc_core, test_is_less_or_equal_ok268);
  tcase_add_test(tc_core, test_is_less_or_equal_ok269);
  tcase_add_test(tc_core, test_is_less_or_equal_ok270);
  tcase_add_test(tc_core, test_is_less_or_equal_ok271);
  tcase_add_test(tc_core, test_is_less_or_equal_ok272);
  tcase_add_test(tc_core, test_is_less_or_equal_ok273);
  tcase_add_test(tc_core, test_is_less_or_equal_ok274);
  tcase_add_test(tc_core, test_is_less_or_equal_ok275);
  tcase_add_test(tc_core, test_is_less_or_equal_ok276);
  tcase_add_test(tc_core, test_is_less_or_equal_ok277);
  tcase_add_test(tc_core, test_is_less_or_equal_ok278);
  tcase_add_test(tc_core, test_is_less_or_equal_ok279);
  tcase_add_test(tc_core, test_is_less_or_equal_ok280);
  tcase_add_test(tc_core, test_is_less_or_equal_ok281);
  tcase_add_test(tc_core, test_is_less_or_equal_ok282);
  tcase_add_test(tc_core, test_is_less_or_equal_ok283);
  tcase_add_test(tc_core, test_is_less_or_equal_ok284);
  tcase_add_test(tc_core, test_is_less_or_equal_ok285);
  tcase_add_test(tc_core, test_is_less_or_equal_ok286);
  tcase_add_test(tc_core, test_is_less_or_equal_ok287);
  tcase_add_test(tc_core, test_is_less_or_equal_ok288);
  tcase_add_test(tc_core, test_is_less_or_equal_ok289);
  tcase_add_test(tc_core, test_is_less_or_equal_ok290);
  tcase_add_test(tc_core, test_is_less_or_equal_ok291);
  tcase_add_test(tc_core, test_is_less_or_equal_ok292);
  tcase_add_test(tc_core, test_is_less_or_equal_ok293);
  tcase_add_test(tc_core, test_is_less_or_equal_ok294);
  tcase_add_test(tc_core, test_is_less_or_equal_ok295);
  tcase_add_test(tc_core, test_is_less_or_equal_ok296);
  tcase_add_test(tc_core, test_is_less_or_equal_ok297);
  tcase_add_test(tc_core, test_is_less_or_equal_ok298);
  tcase_add_test(tc_core, test_is_less_or_equal_ok299);
  tcase_add_test(tc_core, test_is_less_or_equal_ok300);
  tcase_add_test(tc_core, test_is_less_or_equal_ok301);
  tcase_add_test(tc_core, test_is_less_or_equal_ok302);
  tcase_add_test(tc_core, test_is_less_or_equal_ok303);
  tcase_add_test(tc_core, test_is_less_or_equal_ok304);
  tcase_add_test(tc_core, test_is_less_or_equal_ok305);
  tcase_add_test(tc_core, test_is_less_or_equal_ok306);
  tcase_add_test(tc_core, test_is_less_or_equal_ok307);
  tcase_add_test(tc_core, test_is_less_or_equal_ok308);
  tcase_add_test(tc_core, test_is_less_or_equal_ok309);
  tcase_add_test(tc_core, test_is_less_or_equal_ok310);
  tcase_add_test(tc_core, test_is_less_or_equal_ok311);
  tcase_add_test(tc_core, test_is_less_or_equal_ok312);
  tcase_add_test(tc_core, test_is_less_or_equal_ok313);
  tcase_add_test(tc_core, test_is_less_or_equal_ok314);
  tcase_add_test(tc_core, test_is_less_or_equal_ok315);
  tcase_add_test(tc_core, test_is_less_or_equal_ok316);
  tcase_add_test(tc_core, test_is_less_or_equal_ok317);
  tcase_add_test(tc_core, test_is_less_or_equal_ok318);
  tcase_add_test(tc_core, test_is_less_or_equal_ok319);
  tcase_add_test(tc_core, test_is_less_or_equal_ok320);
  tcase_add_test(tc_core, test_is_less_or_equal_ok321);
  tcase_add_test(tc_core, test_is_less_or_equal_ok322);
  tcase_add_test(tc_core, test_is_less_or_equal_ok323);
  tcase_add_test(tc_core, test_is_less_or_equal_ok324);
  tcase_add_test(tc_core, test_is_less_or_equal_ok325);
  tcase_add_test(tc_core, test_is_less_or_equal_ok326);
  tcase_add_test(tc_core, test_is_less_or_equal_ok327);
  tcase_add_test(tc_core, test_is_less_or_equal_ok328);
  tcase_add_test(tc_core, test_is_less_or_equal_ok329);
  tcase_add_test(tc_core, test_is_less_or_equal_ok330);
  tcase_add_test(tc_core, test_is_less_or_equal_ok331);
  tcase_add_test(tc_core, test_is_less_or_equal_ok332);
  tcase_add_test(tc_core, test_is_less_or_equal_ok333);
  tcase_add_test(tc_core, test_is_less_or_equal_ok334);
  tcase_add_test(tc_core, test_is_less_or_equal_ok335);
  tcase_add_test(tc_core, test_is_less_or_equal_ok336);
  tcase_add_test(tc_core, test_is_less_or_equal_ok337);
  tcase_add_test(tc_core, test_is_less_or_equal_ok338);
  tcase_add_test(tc_core, test_is_less_or_equal_ok339);
  tcase_add_test(tc_core, test_is_less_or_equal_ok340);
  tcase_add_test(tc_core, test_is_less_or_equal_ok341);
  tcase_add_test(tc_core, test_is_less_or_equal_ok342);
  tcase_add_test(tc_core, test_is_less_or_equal_ok343);
  tcase_add_test(tc_core, test_is_less_or_equal_ok344);
  tcase_add_test(tc_core, test_is_less_or_equal_ok345);
  tcase_add_test(tc_core, test_is_less_or_equal_ok346);
  tcase_add_test(tc_core, test_is_less_or_equal_ok347);
  tcase_add_test(tc_core, test_is_less_or_equal_ok348);
  tcase_add_test(tc_core, test_is_less_or_equal_ok349);
  tcase_add_test(tc_core, test_is_less_or_equal_ok350);
  tcase_add_test(tc_core, test_is_less_or_equal_ok351);
  tcase_add_test(tc_core, test_is_less_or_equal_ok352);
  tcase_add_test(tc_core, test_is_less_or_equal_ok353);
  tcase_add_test(tc_core, test_is_less_or_equal_ok354);
  tcase_add_test(tc_core, test_is_less_or_equal_ok355);
  tcase_add_test(tc_core, test_is_less_or_equal_ok356);
  tcase_add_test(tc_core, test_is_less_or_equal_ok357);
  tcase_add_test(tc_core, test_is_less_or_equal_ok358);
  tcase_add_test(tc_core, test_is_less_or_equal_ok359);
  tcase_add_test(tc_core, test_is_less_or_equal_ok360);
  tcase_add_test(tc_core, test_is_less_or_equal_ok361);
  tcase_add_test(tc_core, test_is_less_or_equal_ok362);
  tcase_add_test(tc_core, test_is_less_or_equal_ok363);
  tcase_add_test(tc_core, test_is_less_or_equal_ok364);
  tcase_add_test(tc_core, test_is_less_or_equal_ok365);
  tcase_add_test(tc_core, test_is_less_or_equal_ok366);
  tcase_add_test(tc_core, test_is_less_or_equal_ok367);
  tcase_add_test(tc_core, test_is_less_or_equal_ok368);
  tcase_add_test(tc_core, test_is_less_or_equal_ok369);
  tcase_add_test(tc_core, test_is_less_or_equal_ok370);
  tcase_add_test(tc_core, test_is_less_or_equal_ok371);
  tcase_add_test(tc_core, test_is_less_or_equal_ok372);
  tcase_add_test(tc_core, test_is_less_or_equal_ok373);
  tcase_add_test(tc_core, test_is_less_or_equal_ok374);
  tcase_add_test(tc_core, test_is_less_or_equal_ok375);
  tcase_add_test(tc_core, test_is_less_or_equal_ok376);
  tcase_add_test(tc_core, test_is_less_or_equal_ok377);
  tcase_add_test(tc_core, test_is_less_or_equal_ok378);
  tcase_add_test(tc_core, test_is_less_or_equal_ok379);
  tcase_add_test(tc_core, test_is_less_or_equal_ok380);
  tcase_add_test(tc_core, test_is_less_or_equal_ok381);
  tcase_add_test(tc_core, test_is_less_or_equal_ok382);
  tcase_add_test(tc_core, test_is_less_or_equal_ok383);
  tcase_add_test(tc_core, test_is_less_or_equal_ok384);
  tcase_add_test(tc_core, test_is_less_or_equal_ok385);
  tcase_add_test(tc_core, test_is_less_or_equal_ok386);
  tcase_add_test(tc_core, test_is_less_or_equal_ok387);
  tcase_add_test(tc_core, test_is_less_or_equal_ok388);
  tcase_add_test(tc_core, test_is_less_or_equal_ok389);
  tcase_add_test(tc_core, test_is_less_or_equal_ok390);
  tcase_add_test(tc_core, test_is_less_or_equal_ok391);
  tcase_add_test(tc_core, test_is_less_or_equal_ok392);
  tcase_add_test(tc_core, test_is_less_or_equal_ok393);
  tcase_add_test(tc_core, test_is_less_or_equal_ok394);
  tcase_add_test(tc_core, test_is_less_or_equal_ok395);
  tcase_add_test(tc_core, test_is_less_or_equal_ok396);
  tcase_add_test(tc_core, test_is_less_or_equal_ok397);
  tcase_add_test(tc_core, test_is_less_or_equal_ok398);
  tcase_add_test(tc_core, test_is_less_or_equal_ok399);
  tcase_add_test(tc_core, test_is_less_or_equal_ok400);

  suite_add_tcase(s, tc_core);
  return s;
}

Suite *is_less_or_equal_suite2(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("is_less_or_equal_suite2");
  tc_core = tcase_create("Core");
  tcase_add_test(tc_core, test_is_less_or_equal_ok401);
  tcase_add_test(tc_core, test_is_less_or_equal_ok402);
  tcase_add_test(tc_core, test_is_less_or_equal_ok403);
  tcase_add_test(tc_core, test_is_less_or_equal_ok404);
  tcase_add_test(tc_core, test_is_less_or_equal_ok405);
  tcase_add_test(tc_core, test_is_less_or_equal_ok406);
  tcase_add_test(tc_core, test_is_less_or_equal_ok407);
  tcase_add_test(tc_core, test_is_less_or_equal_ok408);
  tcase_add_test(tc_core, test_is_less_or_equal_ok409);
  tcase_add_test(tc_core, test_is_less_or_equal_ok410);
  tcase_add_test(tc_core, test_is_less_or_equal_ok411);
  tcase_add_test(tc_core, test_is_less_or_equal_ok412);
  tcase_add_test(tc_core, test_is_less_or_equal_ok413);
  tcase_add_test(tc_core, test_is_less_or_equal_ok414);
  tcase_add_test(tc_core, test_is_less_or_equal_ok415);
  tcase_add_test(tc_core, test_is_less_or_equal_ok416);
  tcase_add_test(tc_core, test_is_less_or_equal_ok417);
  tcase_add_test(tc_core, test_is_less_or_equal_ok418);
  tcase_add_test(tc_core, test_is_less_or_equal_ok419);
  tcase_add_test(tc_core, test_is_less_or_equal_ok420);
  tcase_add_test(tc_core, test_is_less_or_equal_ok421);
  tcase_add_test(tc_core, test_is_less_or_equal_ok422);
  tcase_add_test(tc_core, test_is_less_or_equal_ok423);
  tcase_add_test(tc_core, test_is_less_or_equal_ok424);
  tcase_add_test(tc_core, test_is_less_or_equal_ok425);
  tcase_add_test(tc_core, test_is_less_or_equal_ok426);
  tcase_add_test(tc_core, test_is_less_or_equal_ok427);
  tcase_add_test(tc_core, test_is_less_or_equal_ok428);
  tcase_add_test(tc_core, test_is_less_or_equal_ok429);
  tcase_add_test(tc_core, test_is_less_or_equal_ok430);
  tcase_add_test(tc_core, test_is_less_or_equal_ok431);
  tcase_add_test(tc_core, test_is_less_or_equal_ok432);
  tcase_add_test(tc_core, test_is_less_or_equal_ok433);
  tcase_add_test(tc_core, test_is_less_or_equal_ok434);
  tcase_add_test(tc_core, test_is_less_or_equal_ok435);
  tcase_add_test(tc_core, test_is_less_or_equal_ok436);
  tcase_add_test(tc_core, test_is_less_or_equal_ok437);
  tcase_add_test(tc_core, test_is_less_or_equal_ok438);
  tcase_add_test(tc_core, test_is_less_or_equal_ok439);
  tcase_add_test(tc_core, test_is_less_or_equal_ok440);
  tcase_add_test(tc_core, test_is_less_or_equal_ok441);
  tcase_add_test(tc_core, test_is_less_or_equal_ok442);
  tcase_add_test(tc_core, test_is_less_or_equal_ok443);
  tcase_add_test(tc_core, test_is_less_or_equal_ok444);
  tcase_add_test(tc_core, test_is_less_or_equal_ok445);
  tcase_add_test(tc_core, test_is_less_or_equal_ok446);
  tcase_add_test(tc_core, test_is_less_or_equal_ok447);
  tcase_add_test(tc_core, test_is_less_or_equal_ok448);
  tcase_add_test(tc_core, test_is_less_or_equal_ok449);
  tcase_add_test(tc_core, test_is_less_or_equal_ok450);
  tcase_add_test(tc_core, test_is_less_or_equal_ok451);
  tcase_add_test(tc_core, test_is_less_or_equal_ok452);
  tcase_add_test(tc_core, test_is_less_or_equal_ok453);
  tcase_add_test(tc_core, test_is_less_or_equal_ok454);
  tcase_add_test(tc_core, test_is_less_or_equal_ok455);
  tcase_add_test(tc_core, test_is_less_or_equal_ok456);
  tcase_add_test(tc_core, test_is_less_or_equal_ok457);
  tcase_add_test(tc_core, test_is_less_or_equal_ok458);
  tcase_add_test(tc_core, test_is_less_or_equal_ok459);
  tcase_add_test(tc_core, test_is_less_or_equal_ok460);
  tcase_add_test(tc_core, test_is_less_or_equal_ok461);
  tcase_add_test(tc_core, test_is_less_or_equal_ok462);
  tcase_add_test(tc_core, test_is_less_or_equal_ok463);
  tcase_add_test(tc_core, test_is_less_or_equal_ok464);
  tcase_add_test(tc_core, test_is_less_or_equal_ok465);
  tcase_add_test(tc_core, test_is_less_or_equal_ok466);
  tcase_add_test(tc_core, test_is_less_or_equal_ok467);
  tcase_add_test(tc_core, test_is_less_or_equal_ok468);
  tcase_add_test(tc_core, test_is_less_or_equal_ok469);
  tcase_add_test(tc_core, test_is_less_or_equal_ok470);
  tcase_add_test(tc_core, test_is_less_or_equal_ok471);
  tcase_add_test(tc_core, test_is_less_or_equal_ok472);
  tcase_add_test(tc_core, test_is_less_or_equal_ok473);
  tcase_add_test(tc_core, test_is_less_or_equal_ok474);
  tcase_add_test(tc_core, test_is_less_or_equal_ok475);
  tcase_add_test(tc_core, test_is_less_or_equal_ok476);
  tcase_add_test(tc_core, test_is_less_or_equal_ok477);
  tcase_add_test(tc_core, test_is_less_or_equal_ok478);
  tcase_add_test(tc_core, test_is_less_or_equal_ok479);
  tcase_add_test(tc_core, test_is_less_or_equal_ok480);
  tcase_add_test(tc_core, test_is_less_or_equal_ok481);
  tcase_add_test(tc_core, test_is_less_or_equal_ok482);
  tcase_add_test(tc_core, test_is_less_or_equal_ok483);
  tcase_add_test(tc_core, test_is_less_or_equal_ok484);
  tcase_add_test(tc_core, test_is_less_or_equal_ok485);
  tcase_add_test(tc_core, test_is_less_or_equal_ok486);
  tcase_add_test(tc_core, test_is_less_or_equal_ok487);
  tcase_add_test(tc_core, test_is_less_or_equal_ok488);
  tcase_add_test(tc_core, test_is_less_or_equal_ok489);
  tcase_add_test(tc_core, test_is_less_or_equal_ok490);
  tcase_add_test(tc_core, test_is_less_or_equal_ok491);
  tcase_add_test(tc_core, test_is_less_or_equal_ok492);
  tcase_add_test(tc_core, test_is_less_or_equal_ok493);
  tcase_add_test(tc_core, test_is_less_or_equal_ok494);
  tcase_add_test(tc_core, test_is_less_or_equal_ok495);
  tcase_add_test(tc_core, test_is_less_or_equal_ok496);
  tcase_add_test(tc_core, test_is_less_or_equal_ok497);
  tcase_add_test(tc_core, test_is_less_or_equal_ok498);
  tcase_add_test(tc_core, test_is_less_or_equal_ok499);
  tcase_add_test(tc_core, test_is_less_or_equal_ok500);
  tcase_add_test(tc_core, test_is_less_or_equal_ok501);
  tcase_add_test(tc_core, test_is_less_or_equal_ok502);
  tcase_add_test(tc_core, test_is_less_or_equal_ok503);
  tcase_add_test(tc_core, test_is_less_or_equal_ok504);
  tcase_add_test(tc_core, test_is_less_or_equal_ok505);
  tcase_add_test(tc_core, test_is_less_or_equal_ok506);
  tcase_add_test(tc_core, test_is_less_or_equal_ok507);
  tcase_add_test(tc_core, test_is_less_or_equal_ok508);
  tcase_add_test(tc_core, test_is_less_or_equal_ok509);
  tcase_add_test(tc_core, test_is_less_or_equal_ok510);
  tcase_add_test(tc_core, test_is_less_or_equal_ok511);
  tcase_add_test(tc_core, test_is_less_or_equal_ok512);
  tcase_add_test(tc_core, test_is_less_or_equal_ok513);
  tcase_add_test(tc_core, test_is_less_or_equal_ok514);
  tcase_add_test(tc_core, test_is_less_or_equal_ok515);
  tcase_add_test(tc_core, test_is_less_or_equal_ok516);
  tcase_add_test(tc_core, test_is_less_or_equal_ok517);
  tcase_add_test(tc_core, test_is_less_or_equal_ok518);
  tcase_add_test(tc_core, test_is_less_or_equal_ok519);
  tcase_add_test(tc_core, test_is_less_or_equal_ok520);
  tcase_add_test(tc_core, test_is_less_or_equal_ok521);
  tcase_add_test(tc_core, test_is_less_or_equal_ok522);
  tcase_add_test(tc_core, test_is_less_or_equal_ok523);
  tcase_add_test(tc_core, test_is_less_or_equal_ok524);
  tcase_add_test(tc_core, test_is_less_or_equal_ok525);
  tcase_add_test(tc_core, test_is_less_or_equal_ok526);
  tcase_add_test(tc_core, test_is_less_or_equal_ok527);
  tcase_add_test(tc_core, test_is_less_or_equal_ok528);
  tcase_add_test(tc_core, test_is_less_or_equal_ok529);
  tcase_add_test(tc_core, test_is_less_or_equal_ok530);
  tcase_add_test(tc_core, test_is_less_or_equal_ok531);
  tcase_add_test(tc_core, test_is_less_or_equal_ok532);
  tcase_add_test(tc_core, test_is_less_or_equal_ok533);
  tcase_add_test(tc_core, test_is_less_or_equal_ok534);
  tcase_add_test(tc_core, test_is_less_or_equal_ok535);
  tcase_add_test(tc_core, test_is_less_or_equal_ok536);
  tcase_add_test(tc_core, test_is_less_or_equal_ok537);
  tcase_add_test(tc_core, test_is_less_or_equal_ok538);
  tcase_add_test(tc_core, test_is_less_or_equal_ok539);
  tcase_add_test(tc_core, test_is_less_or_equal_ok540);
  tcase_add_test(tc_core, test_is_less_or_equal_ok541);
  tcase_add_test(tc_core, test_is_less_or_equal_ok542);
  tcase_add_test(tc_core, test_is_less_or_equal_ok543);
  tcase_add_test(tc_core, test_is_less_or_equal_ok544);
  tcase_add_test(tc_core, test_is_less_or_equal_ok545);
  tcase_add_test(tc_core, test_is_less_or_equal_ok546);
  tcase_add_test(tc_core, test_is_less_or_equal_ok547);
  tcase_add_test(tc_core, test_is_less_or_equal_ok548);
  tcase_add_test(tc_core, test_is_less_or_equal_ok549);
  tcase_add_test(tc_core, test_is_less_or_equal_ok550);
  tcase_add_test(tc_core, test_is_less_or_equal_ok551);
  tcase_add_test(tc_core, test_is_less_or_equal_ok552);
  tcase_add_test(tc_core, test_is_less_or_equal_ok553);
  tcase_add_test(tc_core, test_is_less_or_equal_ok554);
  tcase_add_test(tc_core, test_is_less_or_equal_ok555);
  tcase_add_test(tc_core, test_is_less_or_equal_ok556);
  tcase_add_test(tc_core, test_is_less_or_equal_ok557);
  tcase_add_test(tc_core, test_is_less_or_equal_ok558);
  tcase_add_test(tc_core, test_is_less_or_equal_ok559);
  tcase_add_test(tc_core, test_is_less_or_equal_ok560);
  tcase_add_test(tc_core, test_is_less_or_equal_ok561);
  tcase_add_test(tc_core, test_is_less_or_equal_ok562);
  tcase_add_test(tc_core, test_is_less_or_equal_ok563);
  tcase_add_test(tc_core, test_is_less_or_equal_ok564);
  tcase_add_test(tc_core, test_is_less_or_equal_ok565);
  tcase_add_test(tc_core, test_is_less_or_equal_ok566);
  tcase_add_test(tc_core, test_is_less_or_equal_ok567);
  tcase_add_test(tc_core, test_is_less_or_equal_ok568);
  tcase_add_test(tc_core, test_is_less_or_equal_ok569);
  tcase_add_test(tc_core, test_is_less_or_equal_ok570);
  tcase_add_test(tc_core, test_is_less_or_equal_ok571);
  tcase_add_test(tc_core, test_is_less_or_equal_ok572);
  tcase_add_test(tc_core, test_is_less_or_equal_ok573);
  tcase_add_test(tc_core, test_is_less_or_equal_ok574);
  tcase_add_test(tc_core, test_is_less_or_equal_ok575);
  tcase_add_test(tc_core, test_is_less_or_equal_ok576);
  tcase_add_test(tc_core, test_is_less_or_equal_ok577);
  tcase_add_test(tc_core, test_is_less_or_equal_ok578);
  tcase_add_test(tc_core, test_is_less_or_equal_ok579);
  tcase_add_test(tc_core, test_is_less_or_equal_ok580);
  tcase_add_test(tc_core, test_is_less_or_equal_ok581);
  tcase_add_test(tc_core, test_is_less_or_equal_ok582);
  tcase_add_test(tc_core, test_is_less_or_equal_ok583);
  tcase_add_test(tc_core, test_is_less_or_equal_ok584);
  tcase_add_test(tc_core, test_is_less_or_equal_ok585);
  tcase_add_test(tc_core, test_is_less_or_equal_ok586);
  tcase_add_test(tc_core, test_is_less_or_equal_ok587);
  tcase_add_test(tc_core, test_is_less_or_equal_ok588);
  tcase_add_test(tc_core, test_is_less_or_equal_ok589);
  tcase_add_test(tc_core, test_is_less_or_equal_ok590);
  tcase_add_test(tc_core, test_is_less_or_equal_ok591);
  tcase_add_test(tc_core, test_is_less_or_equal_ok592);
  tcase_add_test(tc_core, test_is_less_or_equal_ok593);
  tcase_add_test(tc_core, test_is_less_or_equal_ok594);
  tcase_add_test(tc_core, test_is_less_or_equal_ok595);
  tcase_add_test(tc_core, test_is_less_or_equal_ok596);
  tcase_add_test(tc_core, test_is_less_or_equal_ok597);
  tcase_add_test(tc_core, test_is_less_or_equal_ok598);
  tcase_add_test(tc_core, test_is_less_or_equal_ok599);
  tcase_add_test(tc_core, test_is_less_or_equal_ok600);
  tcase_add_test(tc_core, test_is_less_or_equal_ok601);
  tcase_add_test(tc_core, test_is_less_or_equal_ok602);
  tcase_add_test(tc_core, test_is_less_or_equal_ok603);
  tcase_add_test(tc_core, test_is_less_or_equal_ok604);
  tcase_add_test(tc_core, test_is_less_or_equal_ok605);
  tcase_add_test(tc_core, test_is_less_or_equal_ok606);
  tcase_add_test(tc_core, test_is_less_or_equal_ok607);
  tcase_add_test(tc_core, test_is_less_or_equal_ok608);
  tcase_add_test(tc_core, test_is_less_or_equal_ok609);
  tcase_add_test(tc_core, test_is_less_or_equal_ok610);
  tcase_add_test(tc_core, test_is_less_or_equal_ok611);
  tcase_add_test(tc_core, test_is_less_or_equal_ok612);
  tcase_add_test(tc_core, test_is_less_or_equal_ok613);
  tcase_add_test(tc_core, test_is_less_or_equal_ok614);
  tcase_add_test(tc_core, test_is_less_or_equal_ok615);
  tcase_add_test(tc_core, test_is_less_or_equal_ok616);
  tcase_add_test(tc_core, test_is_less_or_equal_ok617);
  tcase_add_test(tc_core, test_is_less_or_equal_ok618);
  tcase_add_test(tc_core, test_is_less_or_equal_ok619);
  tcase_add_test(tc_core, test_is_less_or_equal_ok620);
  tcase_add_test(tc_core, test_is_less_or_equal_ok621);
  tcase_add_test(tc_core, test_is_less_or_equal_ok622);
  tcase_add_test(tc_core, test_is_less_or_equal_ok623);
  tcase_add_test(tc_core, test_is_less_or_equal_ok624);
  tcase_add_test(tc_core, test_is_less_or_equal_ok625);
  tcase_add_test(tc_core, test_is_less_or_equal_ok626);
  tcase_add_test(tc_core, test_is_less_or_equal_ok627);
  tcase_add_test(tc_core, test_is_less_or_equal_ok628);
  tcase_add_test(tc_core, test_is_less_or_equal_ok629);
  tcase_add_test(tc_core, test_is_less_or_equal_ok630);
  tcase_add_test(tc_core, test_is_less_or_equal_ok631);
  tcase_add_test(tc_core, test_is_less_or_equal_ok632);
  tcase_add_test(tc_core, test_is_less_or_equal_ok633);
  tcase_add_test(tc_core, test_is_less_or_equal_ok634);
  tcase_add_test(tc_core, test_is_less_or_equal_ok635);
  tcase_add_test(tc_core, test_is_less_or_equal_ok636);
  tcase_add_test(tc_core, test_is_less_or_equal_ok637);
  tcase_add_test(tc_core, test_is_less_or_equal_ok638);
  tcase_add_test(tc_core, test_is_less_or_equal_ok639);
  tcase_add_test(tc_core, test_is_less_or_equal_ok640);
  tcase_add_test(tc_core, test_is_less_or_equal_ok641);
  tcase_add_test(tc_core, test_is_less_or_equal_ok642);
  tcase_add_test(tc_core, test_is_less_or_equal_ok643);
  tcase_add_test(tc_core, test_is_less_or_equal_ok644);
  tcase_add_test(tc_core, test_is_less_or_equal_ok645);
  tcase_add_test(tc_core, test_is_less_or_equal_ok646);
  tcase_add_test(tc_core, test_is_less_or_equal_ok647);
  tcase_add_test(tc_core, test_is_less_or_equal_ok648);
  tcase_add_test(tc_core, test_is_less_or_equal_ok649);
  tcase_add_test(tc_core, test_is_less_or_equal_ok650);
  tcase_add_test(tc_core, test_is_less_or_equal_ok651);
  tcase_add_test(tc_core, test_is_less_or_equal_ok652);
  tcase_add_test(tc_core, test_is_less_or_equal_ok653);
  tcase_add_test(tc_core, test_is_less_or_equal_ok654);
  tcase_add_test(tc_core, test_is_less_or_equal_ok655);
  tcase_add_test(tc_core, test_is_less_or_equal_ok656);
  tcase_add_test(tc_core, test_is_less_or_equal_ok657);
  tcase_add_test(tc_core, test_is_less_or_equal_ok658);
  tcase_add_test(tc_core, test_is_less_or_equal_ok659);
  tcase_add_test(tc_core, test_is_less_or_equal_ok660);
  tcase_add_test(tc_core, test_is_less_or_equal_ok661);
  tcase_add_test(tc_core, test_is_less_or_equal_ok662);
  tcase_add_test(tc_core, test_is_less_or_equal_ok663);
  tcase_add_test(tc_core, test_is_less_or_equal_ok664);
  tcase_add_test(tc_core, test_is_less_or_equal_ok665);
  tcase_add_test(tc_core, test_is_less_or_equal_ok666);
  tcase_add_test(tc_core, test_is_less_or_equal_ok667);
  tcase_add_test(tc_core, test_is_less_or_equal_ok668);
  tcase_add_test(tc_core, test_is_less_or_equal_ok669);
  tcase_add_test(tc_core, test_is_less_or_equal_ok670);
  tcase_add_test(tc_core, test_is_less_or_equal_ok671);
  tcase_add_test(tc_core, test_is_less_or_equal_ok672);
  tcase_add_test(tc_core, test_is_less_or_equal_ok673);
  tcase_add_test(tc_core, test_is_less_or_equal_ok674);
  tcase_add_test(tc_core, test_is_less_or_equal_ok675);
  tcase_add_test(tc_core, test_is_less_or_equal_ok676);
  tcase_add_test(tc_core, test_is_less_or_equal_ok677);
  tcase_add_test(tc_core, test_is_less_or_equal_ok678);
  tcase_add_test(tc_core, test_is_less_or_equal_ok679);
  tcase_add_test(tc_core, test_is_less_or_equal_ok680);
  tcase_add_test(tc_core, test_is_less_or_equal_ok681);
  tcase_add_test(tc_core, test_is_less_or_equal_ok682);
  tcase_add_test(tc_core, test_is_less_or_equal_ok683);
  tcase_add_test(tc_core, test_is_less_or_equal_ok684);
  tcase_add_test(tc_core, test_is_less_or_equal_ok685);
  tcase_add_test(tc_core, test_is_less_or_equal_ok686);
  tcase_add_test(tc_core, test_is_less_or_equal_ok687);
  tcase_add_test(tc_core, test_is_less_or_equal_ok688);
  tcase_add_test(tc_core, test_is_less_or_equal_ok689);
  tcase_add_test(tc_core, test_is_less_or_equal_ok690);
  tcase_add_test(tc_core, test_is_less_or_equal_ok691);
  tcase_add_test(tc_core, test_is_less_or_equal_ok692);
  tcase_add_test(tc_core, test_is_less_or_equal_ok693);
  tcase_add_test(tc_core, test_is_less_or_equal_ok694);
  tcase_add_test(tc_core, test_is_less_or_equal_ok695);
  tcase_add_test(tc_core, test_is_less_or_equal_ok696);
  tcase_add_test(tc_core, test_is_less_or_equal_ok697);
  tcase_add_test(tc_core, test_is_less_or_equal_ok698);
  tcase_add_test(tc_core, test_is_less_or_equal_ok699);
  tcase_add_test(tc_core, test_is_less_or_equal_ok700);
  tcase_add_test(tc_core, test_is_less_or_equal_ok703);
  tcase_add_test(tc_core, test_is_less_or_equal_ok704);
  tcase_add_test(tc_core, test_is_less_or_equal_ok705);
  tcase_add_test(tc_core, test_is_less_or_equal_ok706);
  tcase_add_test(tc_core, test_is_less_or_equal_ok707);
  tcase_add_test(tc_core, test_is_less_or_equal_ok708);
  tcase_add_test(tc_core, test_is_less_or_equal_ok709);
  tcase_add_test(tc_core, test_is_less_or_equal_ok710);
  tcase_add_test(tc_core, test_is_less_or_equal_ok711);
  tcase_add_test(tc_core, test_is_less_or_equal_ok712);
  tcase_add_test(tc_core, test_is_less_or_equal_ok713);
  tcase_add_test(tc_core, test_is_less_or_equal_ok714);
  tcase_add_test(tc_core, test_is_less_or_equal_ok715);
  tcase_add_test(tc_core, test_is_less_or_equal_ok716);
  tcase_add_test(tc_core, test_is_less_or_equal_ok717);
  tcase_add_test(tc_core, test_is_less_or_equal_ok718);
  tcase_add_test(tc_core, test_is_less_or_equal_ok719);
  tcase_add_test(tc_core, test_is_less_or_equal_ok720);
  tcase_add_test(tc_core, test_is_less_or_equal_ok721);
  tcase_add_test(tc_core, test_is_less_or_equal_ok722);
  tcase_add_test(tc_core, test_is_less_or_equal_ok723);
  tcase_add_test(tc_core, test_is_less_or_equal_ok724);
  tcase_add_test(tc_core, test_is_less_or_equal_ok725);
  tcase_add_test(tc_core, test_is_less_or_equal_ok726);
  tcase_add_test(tc_core, test_is_less_or_equal_ok727);
  tcase_add_test(tc_core, test_is_less_or_equal_ok728);
  tcase_add_test(tc_core, test_is_less_or_equal_ok729);
  tcase_add_test(tc_core, test_is_less_or_equal_ok730);
  tcase_add_test(tc_core, test_is_less_or_equal_ok731);
  tcase_add_test(tc_core, test_is_less_or_equal_ok732);
  tcase_add_test(tc_core, test_is_less_or_equal_ok733);
  tcase_add_test(tc_core, test_is_less_or_equal_ok734);
  tcase_add_test(tc_core, test_is_less_or_equal_ok735);
  tcase_add_test(tc_core, test_is_less_or_equal_ok736);
  tcase_add_test(tc_core, test_is_less_or_equal_ok737);
  tcase_add_test(tc_core, test_is_less_or_equal_ok738);
  tcase_add_test(tc_core, test_is_less_or_equal_ok739);
  tcase_add_test(tc_core, test_is_less_or_equal_ok740);
  tcase_add_test(tc_core, test_is_less_or_equal_ok741);
  tcase_add_test(tc_core, test_is_less_or_equal_ok742);
  tcase_add_test(tc_core, test_is_less_or_equal_ok743);
  tcase_add_test(tc_core, test_is_less_or_equal_ok744);
  tcase_add_test(tc_core, test_is_less_or_equal_ok745);
  tcase_add_test(tc_core, test_is_less_or_equal_ok746);
  tcase_add_test(tc_core, test_is_less_or_equal_ok747);
  tcase_add_test(tc_core, test_is_less_or_equal_ok748);
  tcase_add_test(tc_core, test_is_less_or_equal_ok749);
  tcase_add_test(tc_core, test_is_less_or_equal_ok750);
  tcase_add_test(tc_core, test_is_less_or_equal_ok751);
  tcase_add_test(tc_core, test_is_less_or_equal_ok752);
  tcase_add_test(tc_core, test_is_less_or_equal_ok753);
  tcase_add_test(tc_core, test_is_less_or_equal_ok754);
  tcase_add_test(tc_core, test_is_less_or_equal_ok755);
  tcase_add_test(tc_core, test_is_less_or_equal_ok756);
  tcase_add_test(tc_core, test_is_less_or_equal_ok757);
  tcase_add_test(tc_core, test_is_less_or_equal_ok758);
  tcase_add_test(tc_core, test_is_less_or_equal_ok759);
  tcase_add_test(tc_core, test_is_less_or_equal_ok760);
  tcase_add_test(tc_core, test_is_less_or_equal_ok761);
  tcase_add_test(tc_core, test_is_less_or_equal_ok762);
  tcase_add_test(tc_core, test_is_less_or_equal_ok763);
  tcase_add_test(tc_core, test_is_less_or_equal_ok764);
  tcase_add_test(tc_core, test_is_less_or_equal_ok765);
  tcase_add_test(tc_core, test_is_less_or_equal_ok766);
  tcase_add_test(tc_core, test_is_less_or_equal_ok767);
  tcase_add_test(tc_core, test_is_less_or_equal_ok768);
  tcase_add_test(tc_core, test_is_less_or_equal_ok769);
  tcase_add_test(tc_core, test_is_less_or_equal_ok770);
  tcase_add_test(tc_core, test_is_less_or_equal_ok771);
  tcase_add_test(tc_core, test_is_less_or_equal_ok772);
  tcase_add_test(tc_core, test_is_less_or_equal_ok773);
  tcase_add_test(tc_core, test_is_less_or_equal_ok774);
  tcase_add_test(tc_core, test_is_less_or_equal_ok779);
  tcase_add_test(tc_core, test_is_less_or_equal_ok780);
  tcase_add_test(tc_core, test_is_less_or_equal_ok781);
  tcase_add_test(tc_core, test_is_less_or_equal_ok782);
  tcase_add_test(tc_core, test_is_less_or_equal_ok783);
  tcase_add_test(tc_core, test_is_less_or_equal_ok784);
  tcase_add_test(tc_core, test_is_less_or_equal_ok785);
  tcase_add_test(tc_core, test_is_less_or_equal_ok786);
  tcase_add_test(tc_core, test_is_less_or_equal_ok787);
  tcase_add_test(tc_core, test_is_less_or_equal_ok788);
  tcase_add_test(tc_core, test_is_less_or_equal_ok789);
  tcase_add_test(tc_core, test_is_less_or_equal_ok790);
  tcase_add_test(tc_core, test_is_less_or_equal_ok791);
  tcase_add_test(tc_core, test_is_less_or_equal_ok792);
  tcase_add_test(tc_core, test_is_less_or_equal_ok793);
  tcase_add_test(tc_core, test_is_less_or_equal_ok794);
  tcase_add_test(tc_core, test_is_less_or_equal_ok795);
  tcase_add_test(tc_core, test_is_less_or_equal_ok796);
  tcase_add_test(tc_core, test_is_less_or_equal_ok797);
  tcase_add_test(tc_core, test_is_less_or_equal_ok798);
  tcase_add_test(tc_core, test_is_less_or_equal_ok799);
  tcase_add_test(tc_core, test_is_less_or_equal_ok800);

  suite_add_tcase(s, tc_core);
  return s;
}