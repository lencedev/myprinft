/*
** EPITECH PROJECT, 2021
** B-PSU-100-MPL-1-1-myprintf-owen1.bolling
** File description:
** printf_flags
*/

#include "my.h"
#include <stdarg.h>
#include <unistd.h>

int d_printf(va_list args)
{
    int nb = va_arg(args, int);

    my_put_nbr(nb);
    return 0;
}

int u_printf(va_list args)
{
    unsigned int nb = va_arg(args, unsigned int);

    my_put_nbr_unsigned(nb);
    return 0;
}

int c_printf(va_list args)
{
    char string = (char)va_arg(args, int);

    my_putchar(string);
    return 0;
}

void percent_printf()
{
    my_putchar('%');
}

int s_printf(va_list args)
{
    char *char_str = va_arg(args, char*);

    my_putstr(char_str);
    return 0;
}
