/*
** EPITECH PROJECT, 2024
** my_evil_str
** File description:
** marius
*/

#include <string.h>

int my_strlen(char *str)
{
    int i = 0;

    for (; str[i] != '\0';)
        i++;
    return i;
}

char *my_evil_str(char *str)
{
    char *temp = strdup(str);
    int y = 0;

    for (int i = my_strlen(str) - 1; i != -1; i--) {
        temp[y] = str[i];
        y++;
    }
    return temp;
}
