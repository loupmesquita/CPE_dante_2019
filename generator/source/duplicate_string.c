/*
** EPITECH PROJECT, 2019
** duplicate
** File description:
** duplicate
*/

#include "../includes/phoenix.h"

char *duplicate_string(char const *src)
{
    char *str;
    int i;

    str = malloc(sizeof(char) * (my_strlen(src)+1));
    i = 0;

    while (src[i] != '\0')
    {
        str[i] = src[i];
        i = i + 1;
    }
    str[i] = '\0';
    return (str);
}
