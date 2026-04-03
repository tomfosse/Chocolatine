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

Test(my_printf, simple_int_d, .init = cr_redirect_stdout)
{
    my_printf("hello %d world", 12);
    cr_assert_stdout_eq_str("hello 12 world");
}

Test(my_printf, simple_int_i, .init = cr_redirect_stdout)
{
    my_printf("hello %i world", 12);
    cr_assert_stdout_eq_str("hello 12 world");
}

Test(my_printf, simple_int_endwith_d, .init = cr_redirect_stdout)
{
    my_printf("hello %d", 12);
    cr_assert_stdout_eq_str("hello 12");
}

Test(my_printf, simple_int_endwith_i, .init = cr_redirect_stdout)
{
    my_printf("hello %i", 12);
    cr_assert_stdout_eq_str("hello 12");
}

Test(my_printf, int_width, .init = cr_redirect_stdout)
{
    my_printf("%20d", 20);
    cr_assert_stdout_eq_str("                  20");
}

Test(my_printf, int_negative, .init = cr_redirect_stdout)
{
    my_printf("%i", -12);
    cr_assert_stdout_eq_str("-12");
}

Test(my_printf, int_prec, .init = cr_redirect_stdout)
{
    my_printf("%i", -12);
    cr_assert_stdout_eq_str("-12");
}

Test(my_printf, int_flag_zero, .init = cr_redirect_stdout)
{
    my_printf("%012i", 152);
    cr_assert_stdout_eq_str("000000000152");
}
