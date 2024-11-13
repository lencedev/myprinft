/*
** EPITECH PROJECT, 2021
** B-PSU-100-MPL-1-1-myprintf-owen1.bolling
** File description:
** flags_checker
*/
#include "my.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int check(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? 1 : 0;
}

int count(char const *str)
{
    int i = 0;
    while (check(str[i]) != 0 && i < 4)
        i++;
    return i;
}

int checker_simple(char const *str, va_list args)
{
    switch (*str) {
    case 'd': d_printf(args);
        break;
    case 'i': d_printf(args);
        break;
    case 's': s_printf(args);
        break;
    case 'c': c_printf(args);
        break;
    case 'u': u_printf(args);
        break;
    case 'x': x_printf(args);
        break;
    case 'X': X_printf(args);
        break;
    }
    return 0;
}

int checker_double(char const *str, va_list args)
{
    if (str[0] == 'l' && (str[1] == 'd' || str[1] == 'i'))
        ld_printf(args);
    if (str[0] == 'h' && (str[1] == 'd' || str[1] == 'i'))
        hd_printf(args);
    if (str[0] == 'L' && (str[1] == 'i' || str[1] == 'd'))
        lld_printf(args);
    if (str[0] == 'L' && str[1] == 'u')
        llu_printf(args);
    if (str[0] == 'l' && str[1] == 'u')
        lu_printf(args);
    if (str[0] == 'l' && str[1] == 'x')
        lx_printf(args);
    if (str[0] == 'L' && str[1] == 'x')
        Lx_printf(args);
    if (str[0] == 'l' && str[1] == 'X')
        lX_printf(args);
    if (str[0] == 'L' && str[1] == 'X')
        LX_printf(args);
    return 0;
}

int checker_triple(char const *str, va_list args)
{
    if (str[0] == 'l' && str[1] == 'l' && (str[2] == 'i' || str[2] == 'd'))
        lld_printf(args);
    if (str[0] == 'l' && str[1] == 'l' && str[2] == 'u')
        llu_printf(args);
    if (str[0] == 'l' && str[1] == 'l' && str[2] == 'x')
        Lx_printf(args);
    if (str[0] == 'l' && str[1] == 'l' && str[2] == 'X')
        LX_printf(args);
    return 0;
}