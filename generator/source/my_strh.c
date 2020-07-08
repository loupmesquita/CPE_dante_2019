/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** my_strcmp
*/

#include "../includes/phoenix.h"

int my_wrdcmp(char const *s1, char const *s2)
{
    my_strlencst(s1);
    int ss1 = my_strlencst(s1);
    my_strlencst(s2);
    int ss2 = my_strlencst(s2);
    int n = 0;
    int x = 0;
    int y = 0;

    while (s2[y] != '\0'){
        if (s1[n] == s2[y]){
            x++;
            n++;
        }
        y++;
    }
    if (x == ss1)
        return 1;
    else return 0;
}
