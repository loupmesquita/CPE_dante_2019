/*
** EPITECH PROJECT, 2020
** bytes
** File description:
** bytes
*/

#include "../includes/phoenix.h"

int my_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i = i + 1;
    return (i);
}

int backslashnlen(char * buffer)
{
    int back = 0;
    for (int i = 0 ; buffer[i] != '\0' ; i++){
        if (buffer[i] == '\n') back++;
    }
    return back;
}

char counnt(char const *filepath)
{
    char **str = malloc(sizeof(char *) * 10000);
    int fd = open(filepath, O_RDONLY);
    int x = 10000;
    int i = 0;
    read(fd, str, x);
}

int main(int ac, char **av)
{
    fs_open_file(av[1]);
    fs_cat_500_bytes(av[1]);
    return 0;
}
