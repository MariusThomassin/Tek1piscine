/*
** EPITECH PROJECT, 2024
** my_strlen
** File description:
** marius
*/

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}
