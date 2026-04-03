/*
** EPITECH PROJECT, 2025
** my_printf
** File description:
** unit_tests basic
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdio.h>

Test(printf, simple_char, .init = cr_redirect_stdout)
{
    printf("hello %c world", 'a');
    cr_assert_stdout_eq_str("hello a world");
}
