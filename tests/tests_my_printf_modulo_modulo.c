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

Test(my_printf, simple_modulo, .init = cr_redirect_stdout)
{
    my_printf("hello 7%% world");
    cr_assert_stdout_eq_str("hello 7% world");
}

Test(my_printf, space_modulo, .init = cr_redirect_stdout)
{
    my_printf("hello 7%         % world");
    cr_assert_stdout_eq_str("hello 7% world");
}

Test(my_printf, modulo_double, .init = cr_redirect_stdout)
{
    my_printf("hello 7%% 8%% world");
    cr_assert_stdout_eq_str("hello 7% 8% world");
}
