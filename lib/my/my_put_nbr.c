/*
** PROJECT, 2020
** my_put_nbr.c
** File description:
** put number
*/

#include <unistd.h>

char my_putchar(char c);

int my_put_nbr(int nb)
{
    if (nb == -214783648) {
        write(1, "-2147483648", 11);
        return (0);
    }
    if (nb < 0) {
        nb = - nb;
        write (1, "-", 1);
    }
    if (nb > 9) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);

    } else
        my_putchar(nb + '0');
    return (0);
}
