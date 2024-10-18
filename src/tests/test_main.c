#include "test_main.h"

int main(void) {
  run_tests();
  return 0;
}

void run_testcase(Suite *testcase) {
  setlocale(LC_ALL, "");
  static int counter_testcase = 1;

  if (counter_testcase > 1) putchar('\n');
  printf("%s%d%s", "CURRENT TEST: ", counter_testcase, "\n");
  counter_testcase++;

  SRunner *sr = srunner_create(testcase);

  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_NORMAL);

  srunner_free(sr);
}

void run_tests(void) {
  Suite *list_cases[] = {suite_negate(),
                         suite_round(),
                         suite_floor(),
                         suite_truncate(),
                         is_equal_suite1(),
                         is_equal_suite2(),
                         is_equal_suite3(),
                         is_greater_suite1(),
                         is_greater_suite2(),
                         is_greater_or_equal_suite1(),
                         is_greater_or_equal_suite2(),
                         is_less_suite1(),
                         is_less_suite2(),
                         is_less_or_equal_suite1(),
                         is_less_or_equal_suite2(),
                         is_not_equal_suite1(),
                         is_not_equal_suite2(),
                         is_not_equal_suite3(),
                         from_int_to_decimal(),
                         from_float_to_decimal(),
                         from_decimal_to_int(),
                         from_decimal_to_float_suite1(),
                         add_suite0(),
                         add_suite1(),

                         mul_suite0(),
                         mul_suite1(),

                         div_suite0(),

                         sub_suite0(),
                         div_suite1(),
                         sub_suite1(),
                         NULL};

  for (Suite **current_testcase = list_cases; *current_testcase != NULL;
       current_testcase++) {
    run_testcase(*current_testcase);
  }
}
