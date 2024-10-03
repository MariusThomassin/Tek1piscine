/*
** EPITECH PROJECT, 2024
** my_print_alpha
** File description:
** marius
*/

void my_putchar(char c);

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}

int my_print_alpha(void)
{
    my_putstr("abcdefghijklmnopqrstuvwxyz\n");
    return 0;
}
