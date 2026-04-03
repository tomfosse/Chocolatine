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

Test(my_printf, simple_hexa, .init = cr_redirect_stdout)
{
    my_printf("hello %x world", 15658870);
    cr_assert_stdout_eq_str("hello eeef76 world");
}

Test(my_printf, simple_hexa_maj, .init = cr_redirect_stdout)
{
    my_printf("hello %X world", 15658870);
    cr_assert_stdout_eq_str("hello EEEF76 world");
}

Test(my_printf, space_hexa, .init = cr_redirect_stdout)
{
    my_printf("hello %         x world", 15658870);
    cr_assert_stdout_eq_str("hello eeef76 world");
}

Test(my_printf, multiple_hexa, .init = cr_redirect_stdout)
{
    my_printf("hello %x %X world", 15658870, 154773687);
    cr_assert_stdout_eq_str("hello eeef76 939A8B7 world");
}

Test(my_printf, multiple_flags_1_hexa, .init = cr_redirect_stdout)
{
    my_printf("hello %#x %#X world", 15658870, 154773687);
    cr_assert_stdout_eq_str("hello 0xeeef76 0X939A8B7 world");
}

Test(my_printf, width_hex, .init = cr_redirect_stdout)
{
    my_printf("%12x", 152);
    cr_assert_stdout_eq_str("          98");
}
