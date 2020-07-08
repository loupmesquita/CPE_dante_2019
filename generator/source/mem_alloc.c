/*
** EPITECH PROJECT, 2020
** alloc
** File description:
** alloc
*/

#include "../includes/phoenix.h"

char *mem_alloc(char const *a, char const *b)
{
    char *o = malloc(my_conststrlen(a) + my_conststrlen(b) + 2);
    my_strcpycat(o, a, b);
    return o;
}

char *my_strcpycat(char *dest, char const *src, char const *src2)
{
    int n = 0;
    int k = 0;

    while (src[n])
    {
        dest[n] = src[n];
        n++;
    }
    dest[n] = '/';
    n++;
    while (src2[k]){
        dest[n] = src2[k];
        k++;
        n++;
    }
    dest[n] = '\0';
    return (dest);
}
