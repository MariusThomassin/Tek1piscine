/*
** EPITECH PROJECT, 2024
** my_print_comb2
** File description:
** marius
*/

void my_putchar(char c);

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}

void helper(int i, int j)
{
    if (i != 98 || j != 99)
        my_putstr(", ");
}

int my_print_comb2(void)
{
    for (int i = 0; i <= 99; i++) {
        for (int j = i + 1; j <= 99; j++) {
            my_putchar(i / 10 + '0');
            my_putchar(i % 10 + '0');
            my_putchar(' ');
            my_putchar(j / 10 + '0');
            my_putchar(j % 10 + '0');
            helper(i, j);
        }
    }
    my_putchar('\n');
    return 0;
}
