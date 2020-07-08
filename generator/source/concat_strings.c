/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** my_strcat
*/

#include "../includes/phoenix.h"

char *concat_strings(char *dest, char const *src)
{
    char *cat = dest;

    for ( ; *dest; dest++);
    for ( ; *dest = *src; dest++, src++);

    *dest = '\0';
    return cat;
}
