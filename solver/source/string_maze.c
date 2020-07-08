/*
** EPITECH PROJECT, 2020
** str
** File description:
** str
*/

#include "../includes/phoenix.h"

int count(char *str)
{
    int k = 0;

    for (int i = 0 ; str[i] != '\0'; i++) {
        if ((str[i] > 32 && str[i] < 127) &&
            !(str[i+1] < 127 && str[i+1] > 32))
            k++;
    }
    return k;
}

int cnt(char *str, int i)
{
    int n = 0;
    while (str[i] > 32 && str[i] < 127) {
        n++;
        i++;
    }
    return (n);
}

char **thetab(char *str)
{
    int n = 0;
    int i = 0;
    int j = 0;
    char **tab = NULL;

    if (str == NULL)
        return NULL;
    tab = malloc(sizeof(char *) * (count(str) + 1));
    while (str[n] != '\0') {
        for (; str[n] <= 32 || str[n] >= 127; n++);
        tab[i] = malloc(sizeof(char) * cnt(str, n) + 1);
        for (; str[n] > 32 && str[n] < 127; n++, j++)
            tab[i][j] = str[n];
        tab[i][j] = '\0';
        i++;
        j = 0;
    }
    tab[i] = NULL;
    return tab;
}
