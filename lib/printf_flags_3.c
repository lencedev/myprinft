/*
** EPITECH PROJECT, 2021
** B-PSU-100-MPL-1-1-myprintf-owen1.bolling
** File description:
** printf_flags_3
*/

#include "my.h"
#include <stdarg.h>
#include <unistd.h>

int lld_printf(va_list args)
{
    long long int lld_nb = va_arg(args, long long int);

    my_put_nbr_lld(lld_nb);
    return 0;
}

int llu_printf(va_list args)
{
    unsigned long long int llu_nb = va_arg(args, unsigned long long int);

    my_put_nbr_llu(llu_nb);
    return 0;
}