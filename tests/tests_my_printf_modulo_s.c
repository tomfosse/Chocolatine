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

Test(my_printf, simple_string, .init = cr_redirect_stdout)
{
    my_printf("hello %s world", "bonjour");
    cr_assert_stdout_eq_str("hello bonjour world");
}

Test(my_printf, space_string, .init = cr_redirect_stdout)
{
    my_printf("hello %         s world", "bonjour");
    cr_assert_stdout_eq_str("hello bonjour world");
}

Test(my_printf, null_string, .init = cr_redirect_stdout)
{
    my_printf("hello %         s world", NULL);
    cr_assert_stdout_eq_str("hello  world");
}

Test(my_printf, str_double, .init = cr_redirect_stdout)
{
    my_printf("hello %s %s world", "bonjour", "aurevoir");
    cr_assert_stdout_eq_str("hello bonjour aurevoir world");
}

Test(my_printf, str_width, .init = cr_redirect_stdout)
{
    my_printf("%20s", "bonjour");
    cr_assert_stdout_eq_str("             bonjour");
}
