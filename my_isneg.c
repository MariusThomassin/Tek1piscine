/*
** EPITECH PROJECT, 2024
** my_isneg
** File description:
** marius
*/

void my_putchar(char c);

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}

int my_isneg(int n)
{
    if (n < 0)
        my_putstr("N\n");
    else
        my_putstr("P\n");
    return 0;
}
