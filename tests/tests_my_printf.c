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

Test(my_printf, basic_test, .init = cr_redirect_stdout)
{
    int result = my_printf("hello bonjour world");
    cr_assert_stdout_eq_str("hello bonjour world");
    cr_assert_eq(result, 19);
}

Test(my_printf, unic_test, .init = cr_redirect_stdout)
{
    int result = my_printf("%c", 'b');
    cr_assert_stdout_eq_str("b");
    cr_assert_eq(result, 1);
}

Test(my_printf, unic_modulo_test, .init = cr_redirect_stdout)
{
    int result = my_printf("%");
    cr_assert_eq(result, -1);
}

Test(my_printf, unic_modulo_q_test, .init = cr_redirect_stdout)
{
    int result = my_printf("%q");
    cr_assert_eq(result, -1);
}

Test(my_printf, advanced_test, .init = cr_redirect_stdout)
{
    char *str = "Hey ! this is %s, I'am %d years old %c Btw i use %s";
    my_printf(str, "mathisgpn", 19, '!', "arch");
    cr_assert_stdout_eq_str(
        "Hey ! this is mathisgpn, I'am 19 years old ! Btw i use arch");
}

Test(my_printf, mutliple_modulo, .init = cr_redirect_stdout)
{
    my_printf("%%%s%%", "mathisgpn");
    cr_assert_stdout_eq_str("%mathisgpn%");
}

Test(my_printf, null_test, .init = cr_redirect_stdout)
{
    my_printf(NULL);
}

Test(my_printf, no_precision_test, .init = cr_redirect_stdout)
{
    my_printf("%.f", 52.2574558);
    cr_assert_stdout_eq_str("52");
}

Test(my_printf, mul_mod_end_with_unknow_mod, .init = cr_redirect_stdout)
{
    int return_value = my_printf("%%%s%%%q", "mathisgpn");
    cr_assert_eq(return_value, -1);
}
