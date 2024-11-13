/*
** EPITECH PROJECT, 2021
** Cworkshoplib
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_
#include <stdarg.h>

int my_atoi(char const *str);
void my_putchar(char ch);
int my_isneg(int nb);
int my_put_nbr(int nb);
int my_put_nbr_ld(long long int);
int my_put_nbr_short(short int);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int is_digit(char c);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);int my_numlen(int nb);
char *my_itoa(int nb);
int my_put_nbr_unsigned(unsigned int nb);
int d_printf(va_list args);
int u_printf(va_list args);
int c_printf(va_list args);
int s_printf(va_list args);
int ld_printf(va_list args);
int hd_printf(va_list args);
int lld_printf(va_list args);
int x_printf(va_list args);
int X_printf(va_list args);
int llu_printf(va_list args);
int lu_printf(va_list args);
int Lx_printf(va_list args);
int lx_printf(va_list args);
int lX_printf(va_list args);
int LX_printf(va_list args);
int count(char const *str);
int checker_simple(char const *str, va_list args);
int checker_double(char const *str, va_list args);
int way(char const *str, va_list args);
int checker_triple(char const *str, va_list args);
void my_put_nbr_base(int nb, char *base);
void my_put_nbr_base_lx(unsigned long int nb, char *base);
void my_put_nbr_base_Lx(unsigned long long int nb, char *base);
int my_put_nbr_lld(long long int nb);
int my_put_nbr_llu(unsigned long long int nb);
int my_put_nbr_lu(unsigned long int nb);
#endif
