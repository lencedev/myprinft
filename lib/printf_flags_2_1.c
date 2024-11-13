/*
** EPITECH PROJECT, 2021
** B-PSU-100-MPL-1-1-myprintf-owen1.bolling
** File description:
** printf_flags_2
*/

#include "my.h"
#include <stdarg.h>
#include <unistd.h>

int lX_printf(va_list args)
{
    char *base = "0123456789ABCDEF";
    unsigned long int nb = va_arg(args, unsigned long int);

    my_put_nbr_base_lx(nb, base);
    return 0;
}

int LX_printf(va_list args)
{
    char *base = "0123456789ABCDEF";
    unsigned long long int nb = va_arg(args, unsigned long long int);

    my_put_nbr_base_Lx(nb, base);
    return 0;
}