/*
** EPITECH PROJECT, 2025
** my_printf
** File description:
** unit_tests basic
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"
#include "../include/my_printf.h"

Test(my_printf, modulo_g_basic_test, .init = cr_redirect_stdout)
{
    my_printf("%g", 85.00);
    cr_assert_stdout_eq_str("85");
}

Test(my_printf, modulo_g_basic_test_six_digits, .init = cr_redirect_stdout)
{
    my_printf("%g", 8579.55);
    cr_assert_stdout_eq_str("8579.55");
}

Test(my_printf, modulo_g_basic_test_seven_digits, .init = cr_redirect_stdout)
{
    my_printf("%g", 8579.559);
    cr_assert_stdout_eq_str("8579.56");
}

Test(my_printf, modulo_g_basic_test_seven_dec_digits,
    .init = cr_redirect_stdout)
{
    my_printf("%g", 8579559.0);
    cr_assert_stdout_eq_str("8.57956e+06");
}

Test(my_printf, modulo_g_basic_test_seven_dec_digits_alpha,
    .init = cr_redirect_stdout)
{
    my_printf("%G", 8579559.0);
    cr_assert_stdout_eq_str("8.57956E+06");
}

Test(my_printf, modulo_g_advanced_test, .init = cr_redirect_stdout)
{
    my_printf("%G", 854646.465454);
    cr_assert_stdout_eq_str("854646");
}

Test(my_printf, modulo_g_precision_basic_test, .init = cr_redirect_stdout)
{
    my_printf("%g", 86.54);
    cr_assert_stdout_eq_str("86.54");
}
