/*
** EPITECH PROJECT, 2024
** my_print_combn
** File description:
** marius
*/

void my_putchar(char c);

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}

void helper(char *str, int n, int i)
{
    while (str[0] <= '9' - n + 1) {
        my_putstr(str);
        if (str[0] == '9' - n + 1)
            break;
        my_putstr(", ");
        i = n - 1;
        while (i >= 0 && str[i] == '9' - (n - 1 - i)) {
            i--;
        }
        if (i < 0)
            break;
        str[i]++;
        i++;
        while (i < n) {
            str[i] = str[i - 1] + 1;
            i++;
        }
    }
}

int my_print_combn(int n)
{
    char *str = malloc(sizeof(char) * n + 1);
    int i = 0;

    for (int i = 0; i < n; i++)
        str[i] = i + '0';
    str[n] = '\0';
    helper(str, n, i);
    my_putchar('\n');
    return 0;
}
