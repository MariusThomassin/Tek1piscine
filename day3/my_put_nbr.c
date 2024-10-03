/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** marius
*/

void my_putchar(char c);

int my_put_nbr_function(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb >= 10) {
        my_put_nbr_function(nb / 10);
        my_putchar(nb % 10 + 48);
    } else {
        my_putchar(nb + 48);
    }
    return 0;
}

void my_put_nbr(int nb)
{
    my_put_nbr_function(nb);
    my_putchar('\n');
}
