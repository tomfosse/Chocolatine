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

Test(my_printf, mod_d_return, .init = cr_redirect_stdout)
{
    int return_value = my_printf("%d", 55122);
    cr_assert_eq(return_value, 5);
}

Test(my_printf, mod_i_return, .init = cr_redirect_stdout)
{
    int return_value = my_printf("%i", 55122);
    cr_assert_eq(return_value, 5);
}

Test(my_printf, mod_s_return, .init = cr_redirect_stdout)
{
    int return_value = my_printf("%s", "bonjour");
    cr_assert_eq(return_value, 7);
}

Test(my_printf, mod_c_return, .init = cr_redirect_stdout)
{
    int return_value = my_printf("%c", 'r');
    cr_assert_eq(return_value, 1);
}

Test(my_printf, mod_o_return, .init = cr_redirect_stdout)
{
    int return_value = my_printf("%o", 152);
    cr_assert_eq(return_value, 3);
}

Test(my_printf, mod_u_return, .init = cr_redirect_stdout)
{
    int return_value = my_printf("%u", 152);
    cr_assert_eq(return_value, 3);
}

Test(my_printf, mod_x_return, .init = cr_redirect_stdout)
{
    int return_value = my_printf("%x", 15122122);
    cr_assert_eq(return_value, 6);
}

Test(my_printf, mod_f_return, .init = cr_redirect_stdout)
{
    int return_value = my_printf("%f", 85.74);
    cr_assert_eq(return_value, 9);
}

Test(my_printf, mod_e_return, .init = cr_redirect_stdout)
{
    int return_value = my_printf("%e", 85.74);
    cr_assert_eq(return_value, 12);
}

Test(my_printf, mod_g_return, .init = cr_redirect_stdout)
{
    int return_value = my_printf("%g", 85.74);
    cr_assert_eq(return_value, 5);
}

Test(my_printf, mod_p_return, .init = cr_redirect_stdout)
{
    int return_value = my_printf("%p", "hey");
    cr_assert_eq(return_value, 14);
}

Test(my_printf, mod_n_return, .init = cr_redirect_stdout)
{
    int return_value = my_printf("vfdfvdvfd %n fdfdffddf");
    cr_assert_eq(return_value, 20);
}

Test(my_printf, mod_modulo_return, .init = cr_redirect_stdout)
{
    int return_value = my_printf("vfdfvdvfd 7%% fdfdffddf");
    cr_assert_eq(return_value, 22);
}
