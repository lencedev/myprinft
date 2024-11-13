/*
** EPITECH PROJECT, 2021
** B-PSU-100-MPL-1-1-myprintf-owen1.bolling
** File description:
** printf_flags_2
*/

#include "my.h"
#include <stdarg.h>
#include <unistd.h>

int ld_printf(va_list args)
{
    long int ld_nb = va_arg(args, long int);

    my_put_nbr_ld(ld_nb);
    return 0;
}

int hd_printf(va_list args)
{
    short int short_nb = (short)va_arg(args, int);

    my_put_nbr_short(short_nb);
    return 0;
}

int lu_printf(va_list args)
{
    unsigned long int lu_nb = va_arg(args, unsigned long int);

    my_put_nbr_lu(lu_nb);
    return 0;
}

int lx_printf(va_list args)
{
    char *base = "0123456789abcdef";
    unsigned long int nb = va_arg(args, unsigned long int);

    my_put_nbr_base_lx(nb, base);
    return 0;
}

int Lx_printf(va_list args)
{
    char *base = "0123456789abcdef";
    unsigned long long int nb = va_arg(args, unsigned long long int);

    my_put_nbr_base_Lx(nb, base);
    return 0;
}