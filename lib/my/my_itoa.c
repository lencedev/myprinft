/*
** EPITECH PROJECT, 2021
** bistromatic
** File description:
** my_itoa
*/

#include <stdlib.h>

int my_numlen(int nb)
{
    int count = 0;

    if (nb < 0)
        nb *= -1;
    while (nb != 0) {
        count++;
        nb /= 10;
    }
    return count;
}

char *my_itoa(int nb)
{
    char *final = malloc(sizeof(char) * (my_numlen(nb) + 1));
    int len1 = my_numlen(nb);

    final[0] = '\0';
    if (nb < 0) {
        final[0] = '-';
        nb *= -1;
    }
    for (int i = 0; nb > 0; i++) {
        final[len1 - i] = (nb % 10 + '0');
        nb /= 10;
    }
    if (final[0] == '\0')
        return &final[1];
    return final;
}
