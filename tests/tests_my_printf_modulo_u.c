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

Test(my_printf, simple_uint, .init = cr_redirect_stdout)
{
    my_printf("hello %u world", -20);
    cr_assert_stdout_eq_str("hello 4294967276 world");
}

Test(my_printf, space_uint, .init = cr_redirect_stdout)
{
    my_printf("hello %         u world", -20);
    cr_assert_stdout_eq_str("hello 4294967276 world");
}

Test(my_printf, multiple_uint, .init = cr_redirect_stdout)
{
    my_printf("hello %u %u world", -20, -20);
    cr_assert_stdout_eq_str("hello 4294967276 4294967276 world");
}
