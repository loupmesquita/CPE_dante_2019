/*
** EPITECH PROJECT, 2020
** unfer
** File description:
** unfer
*/

#include "my.h"

void fs_understand_return_of_read(int fd, char *buffer, int size)
{
    int r = read(fd, buffer, size);

    if (r == -1) {
        my_putstr("read failed\n");
        return;
    }
    if (r == 0) {
        my_putstr("read has nothing more to read\n");
        return;
    }
    if (r < size) {
        my_putstr("read didn't complete the entire buffer\n");
        return;
    }
    if (r == size) {
        my_putstr("read completed the entire buffer\n");
        return;
    }
    close(fd);
}