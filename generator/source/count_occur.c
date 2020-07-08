/*
** EPITECH PROJECT, 2019
** count_occur
** File description:
** count_occur
*/

#include "../includes/phoenix.h"

int count_occur(char *str, char c)
{
    int i = 0;
    int count = 0;
    char letter;

    if (c >= 'a' && c <= 'z') {
        letter = c - 32;
    }
    if (c >= 'A' && c <= 'Z') {
        letter = c + 32;
    }
    while (str[i] != '\0') {
        if (str[i] == c || str[i] == letter) {
            count++;
        }
        i++;
    }
    display(str, c, count);
    return (count);
}
