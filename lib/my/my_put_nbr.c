/*
** EPITECH PROJECT, 2021
** Day03
** File description:
** Task07
*/

void my_putchar(char ch);

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        if (nb == -2147483648) {
            my_put_nbr(-nb / 10);
            my_putchar(8 + '0');
        } else {
            my_put_nbr(-nb);
        }
    } else if (nb <= 9) {
        my_putchar(nb + 48);
    } else {
        if (nb / 10 != 0) {
            my_put_nbr(nb / 10);
            my_put_nbr(nb % 10);
        } else {
            my_put_nbr(nb % 10);
        }
    }
    return 0;
}
