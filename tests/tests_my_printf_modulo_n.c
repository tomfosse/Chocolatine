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

Test(my_printf, modulo_n_basic_test, .init = cr_redirect_stdout)
{
    int n = 0;

    my_printf("hello %n world", &n);
    cr_assert_eq(n, 6);
}

Test(my_printf, modulo_n_null_test, .init = cr_redirect_stdout)
{
    my_printf("hello %n world", NULL);
}
