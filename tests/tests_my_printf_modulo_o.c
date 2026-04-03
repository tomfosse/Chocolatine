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

Test(my_printf, simple_octal, .init = cr_redirect_stdout)
{
    my_printf("hello %o world", 60);
    cr_assert_stdout_eq_str("hello 74 world");
}

Test(my_printf, simple_octal_space, .init = cr_redirect_stdout)
{
    my_printf("hello %    o world", 60);
    cr_assert_stdout_eq_str("hello 74 world");
}

Test(my_printf, simple_octal_null, .init = cr_redirect_stdout)
{
    my_printf("hello %o world", NULL);
    cr_assert_stdout_eq_str("hello 0 world");
}

Test(my_printf, advanced_octal, .init = cr_redirect_stdout)
{
    my_printf("%o", 60);
    cr_assert_stdout_eq_str("74");
}

Test(my_printf, advanced_octal_long, .init = cr_redirect_stdout)
{
    my_printf("%o", 6526452);
    cr_assert_stdout_eq_str("30712764");
}

Test(my_printf, advanced_octal_precision, .init = cr_redirect_stdout)
{
    my_printf("%.2o", 6526452);
    cr_assert_stdout_eq_str("30712764");
}

Test(my_printf, octal_flag_hashtag, .init = cr_redirect_stdout)
{
    my_printf("%#o", 152);
    cr_assert_stdout_eq_str("0230");
}

Test(my_printf, octal_flag_zero, .init = cr_redirect_stdout)
{
    my_printf("%012o", 152);
    cr_assert_stdout_eq_str("000000000230");
}
