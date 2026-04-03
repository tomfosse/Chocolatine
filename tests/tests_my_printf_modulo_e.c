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

Test(my_printf, simple_scientific, .init = cr_redirect_stdout)
{
    my_printf("hello %e world", 85.00);
    cr_assert_stdout_eq_str("hello 8.500000e+01 world");
}

Test(my_printf, simple_scientific_upper, .init = cr_redirect_stdout)
{
    my_printf("hello %E world", 85.00);
    cr_assert_stdout_eq_str("hello 8.500000E+01 world");
}

Test(my_printf, simple_scientific_endwith, .init = cr_redirect_stdout)
{
    my_printf("hello %e", 85.00);
    cr_assert_stdout_eq_str("hello 8.500000e+01");
}

Test(my_printf, simple_scientific_endwith_space, .init = cr_redirect_stdout)
{
    my_printf("hello %E", 85.00);
    cr_assert_stdout_eq_str("hello 8.500000E+01");
}

Test(my_printf, simple_already_scientific_endwith_space,
    .init = cr_redirect_stdout)
{
    my_printf("hello %E", 8.15);
    cr_assert_stdout_eq_str("hello 8.150000E+00");
}

Test(my_printf, simple_already_2_scientific_endwith_space,
    .init = cr_redirect_stdout)
{
    my_printf("hello %e", 80.15);
    cr_assert_stdout_eq_str("hello 8.015000e+01");
}

Test(my_printf, advanced_scientific_endwith_space, .init = cr_redirect_stdout)
{
    my_printf("hello %E", 486.864);
    cr_assert_stdout_eq_str("hello 4.868640E+02");
}

Test(my_printf, big_double_scientific_endwith_space, .init = cr_redirect_stdout)
{
    my_printf("hello %E", 486456.864);
    cr_assert_stdout_eq_str("hello 4.864569E+05");
}

Test(my_printf, basic_precision_e, .init = cr_redirect_stdout)
{
    my_printf("%.2e", 56841.5496894);
    cr_assert_stdout_eq_str("5.68e+04");
}

Test(my_printf, basic_precision_e_neg, .init = cr_redirect_stdout)
{
    my_printf("%.2e", -56841.5496894);
    cr_assert_stdout_eq_str("-5.68e+04");
}

Test(my_printf, basic_precision_e_with_rounded, .init = cr_redirect_stdout)
{
    my_printf("%.2e", 56851.5496894);
    cr_assert_stdout_eq_str("5.69e+04");
}

Test(my_printf, basic_scient_exp_neg, .init = cr_redirect_stdout)
{
    my_printf("%e", 0.0156155);
    cr_assert_stdout_eq_str("1.561550e-02");
}

Test(my_printf, basic_scient_exp_neg_and_neg, .init = cr_redirect_stdout)
{
    my_printf("%e", -0.0156155);
    cr_assert_stdout_eq_str("-1.561550e-02");
}

Test(get_scientific, basic_test_when_nothing, .init = cr_redirect_stdout)
{
    my_printf("%e", 0.0156155);
    cr_assert_stdout_eq_str("1.561550e-02");
}
