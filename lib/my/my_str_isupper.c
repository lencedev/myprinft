/*
** EPITECH PROJECT, 2021
** Day06
** File description:
** Task14
*/

int my_str_isupper(char const *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] < 'A' || str[i] > 'Z')
            return 0;
    }
    return 1;
}
