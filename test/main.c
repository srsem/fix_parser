/// @file   main.c
/// @author Dmitry S. Melnikov, dmitryme@gmail.com
/// @date   Created on: 08/03/2012 02:41:31 PM

#include <check.h>
#include <stdlib.h>

extern Suite* make_fix_tag_tests_suite();

int main()
{
   Suite* s = make_fix_tag_tests_suite();
   SRunner* sr = srunner_create(s);
   srunner_run_all(sr, CK_NORMAL);
   int number_failed = srunner_ntests_failed(sr);
   srunner_free(sr);
   return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}