/*
** EPITECH PROJECT, 2021
** B-PSU-100-MPL-1-1-myprintf-owen1.bolling
** File description:
** my_put_nbr_short
*/

void my_putchar(char ch);

int my_put_nbr_short(short int nb)
{
    if (nb < 0) {
        my_putchar('-');
        if (nb == -32768) {
            my_put_nbr_short(-nb / 10);
            my_putchar(8 + '0');
        } else {
            my_put_nbr_short(-nb);
        }
    } else if (nb <= 9) {
        my_putchar(nb + 48);
    } else {
        if (nb / 10 != 0) {
            my_put_nbr_short(nb / 10);
            my_put_nbr_short(nb % 10);
        } else {
            my_put_nbr_short(nb % 10);
        }
    }
    return 0;
}