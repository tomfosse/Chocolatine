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

Test(my_printf, simple_char, .init = cr_redirect_stdout)
{
    my_printf("hello %c world", 'a');
    cr_assert_stdout_eq_str("hello a world");
}

Test(my_printf, space_char, .init = cr_redirect_stdout)
{
    my_printf("hello %         c world", 'a');
    cr_assert_stdout_eq_str("hello a world");
}

Test(my_printf, multiple_char, .init = cr_redirect_stdout)
{
    my_printf("hello %c %c world", 'b', 'j');
    cr_assert_stdout_eq_str("hello b j world");
}

Test(my_printf, end_char, .init = cr_redirect_stdout)
{
    my_printf("hello %c", 'b');
    cr_assert_stdout_eq_str("hello b");
}
