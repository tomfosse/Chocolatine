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

Test(my_printf, modulo_p_basic_test, .init = cr_redirect_stdout)
{
    my_printf("%p", "hey");
}

Test(my_printf, modulo_p_padding_test, .init = cr_redirect_stdout)
{
    my_printf("%20p", "hey");
}
