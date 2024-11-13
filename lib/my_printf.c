/*
** EPITECH PROJECT, 2021
** B-PSU-100-MPL-1-1-myprintf-owen1.bolling
** File description:
** my_printf
*/

#include "my.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int way(char const *str, va_list args)
{
    int nb_len = count(str);
    char size[nb_len];

    for (int i = 0; i < nb_len; i++)
        size[i] = str[i];

    switch (nb_len) {
        case 1: checker_simple(size, args); return 1;
            break;
        case 2: checker_double(size, args); return 2;
            break;
        case 3: checker_triple(size, args); return 3;
            break;
    }
    return 0;
}

int my_printf(char const *str, ...)
{
    va_list args;
    va_start(args, str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%' && str[i + 1] != '%')
            i += way(&str[i+1], args);

        else
            write(1, &str[i], 1);
    }
    return 0;
}
