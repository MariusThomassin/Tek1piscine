/*
** EPITECH PROJECT, 2024
** my_print_revalpha
** File description:
** marius
*/

void my_putchar(char c);

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}

int my_print_revalpha(void)
{
    my_putstr("zyxwvutsrqponmlkjihgfedcba\n");
    return 0;
}
