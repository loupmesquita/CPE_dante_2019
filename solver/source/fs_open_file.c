
/*
** EPITECH PROJECT, 2019
** fs_open
** File description:
** fs_open
*/

#include "../includes/phoenix.h"

int fs_open_file(char const *filepath)
{
    int fd;

    fd = open(filepath , O_RDONLY);
    if (fd == -1)
    {
        my_putstr("FAILURE\n");
        exit(84);
    }

    else {
        return (fd);
    }
    close(fd);

}

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int n = 0;

    while (str[n] != '\0')
    {
        my_putchar(str[n]);
        n = n + 1;
    }
}
