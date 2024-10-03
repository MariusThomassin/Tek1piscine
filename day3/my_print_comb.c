/*
** EPITECH PROJECT, 2024
** my_print_comb
** File description:
** marius
*/

void my_putchar(char c);

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}

void helper(int i, int j, int y)
{
    for (char y = j + 1; y <= '9'; y++) {
        my_putchar(i);
        my_putchar(j);
        my_putchar(y);
        if (!(i == '7' && j == '8' && y == '9')) {
            my_putstr(", ");
        }
    }
}

int my_print_comb(void)
{
    for (char i = '0'; i <= '7'; i++) {
        for (char j = i + 1; j <= '8'; j++) {
            helper(i, j, '0');
        }
    }
    my_putchar('\n');
    return 0;
}
