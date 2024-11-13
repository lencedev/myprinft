/*
** EPITECH PROJECT, 2021
** B-PSU-100-MPL-1-1-myprintf-owen1.bolling
** File description:
** my_base
*/

int my_strlen(const char *str);
void my_putchar(char ch);

void my_put_nbr_base_lx(unsigned long int nb, char *base)
{
    int size = my_strlen(base);
    if (nb / size != 0)
        my_put_nbr_base_lx(nb / size, base);
    my_putchar(base[nb % size]);
}