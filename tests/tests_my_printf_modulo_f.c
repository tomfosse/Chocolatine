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
#include <math.h>

Test(my_printf, simple_float, .init = cr_redirect_stdout)
{
    my_printf("hello %f world", 15.25);
    cr_assert_stdout_eq_str("hello 15.250000 world");
}

Test(my_printf, simple_float_space, .init = cr_redirect_stdout)
{
    my_printf("hello %    f world", 15.25);
    cr_assert_stdout_eq_str("hello  15.250000 world");
}

Test(my_printf, simple_float_null, .init = cr_redirect_stdout)
{
    my_printf("hello %f world", NULL);
    cr_assert_stdout_eq_str("hello 0.000000 world");
}

Test(my_printf, advanced_float, .init = cr_redirect_stdout)
{
    my_printf("%f", 8989.48964486);
    cr_assert_stdout_eq_str("8989.489645");
}

Test(my_printf, advanced_2_float, .init = cr_redirect_stdout)
{
    my_printf("%f", 8989.48964456);
    cr_assert_stdout_eq_str("8989.489645");
}

Test(my_printf, advanced_3_float, .init = cr_redirect_stdout)
{
    my_printf("%f", 8989.48964446);
    cr_assert_stdout_eq_str("8989.489644");
}

Test(my_printf, advanced_4_float, .init = cr_redirect_stdout)
{
    my_printf("%f", 8989.48964496);
    cr_assert_stdout_eq_str("8989.489645");
}

Test(my_printf, advanced_5_float, .init = cr_redirect_stdout)
{
    my_printf("%f", 8989.89999999);
    cr_assert_stdout_eq_str("8989.900000");
}

Test(my_printf, negative_float, .init = cr_redirect_stdout)
{
    my_printf("%f", -121.1125);
    cr_assert_stdout_eq_str("-121.112500");
}

Test(my_printf, negative_float_prec_zero, .init = cr_redirect_stdout)
{
    my_printf("%.f", -121.1125);
    cr_assert_stdout_eq_str("-121");
}

Test(my_printf, negative_float_prec_zero_flag_hash, .init = cr_redirect_stdout)
{
    my_printf("%#.f", -121.1125);
    cr_assert_stdout_eq_str("-121.");
}

Test(my_printf, basic_f_prec_zero, .init = cr_redirect_stdout)
{
    my_printf("%.f", 56851.5496894);
    cr_assert_stdout_eq_str("56852");
}

Test(my_printf, basic_f_prec_zero_flag_hash, .init = cr_redirect_stdout)
{
    my_printf("%#.f", 56851.5496894);
    cr_assert_stdout_eq_str("56852.");
}

Test(my_printf, nan_float, .init = cr_redirect_stdout)
{
    my_printf("%f", ((0.0f) / (0.0f)));
    cr_assert_stdout_eq_str("nan");
}

Test(my_printf, inf_float, .init = cr_redirect_stdout)
{
    my_printf("%f", INFINITY);
    cr_assert_stdout_eq_str("inf");
}

Test(my_printf, width_float, .init = cr_redirect_stdout)
{
    my_printf("%12f", 85.74);
    cr_assert_stdout_eq_str("   85.740000");
}

Test(my_printf, width_precision_float, .init = cr_redirect_stdout)
{
    my_printf("%12.3f", 85.74524);
    cr_assert_stdout_eq_str("      85.745");
}
