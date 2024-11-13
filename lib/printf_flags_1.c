/*
** EPITECH PROJECT, 2021
** B-PSU-100-MPL-1-1-myprintf-owen1.bolling
** File description:
** printf_flags_1
*/

#include "my.h"
#include <stdarg.h>
#include <unistd.h>

int x_printf(va_list args)
{
    char *base = "0123456789abcdef";
    int nb = va_arg(args, int);

    my_put_nbr_base(nb, base);
    return 0;
}

int X_printf(va_list args)
{
    char *base = "0123456789ABCDEF";
    int nb = va_arg(args, int);

    my_put_nbr_base(nb, base);
    return 0;
}