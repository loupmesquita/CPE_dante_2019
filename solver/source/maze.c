/*
** EPITECH PROJECT, 2020
** maze
** File description:
** maze
*/

#include "../includes/phoenix.h"

char **intochar(int **maze, trash_t *m)
{
    char **lol = malloc(sizeof(char *) * m->H);
    for (int p = m->H, i = 0 ; i != p ; i++){
        lol[i] = malloc(sizeof(char ) * m->W + 1);
        for (int q = m->W, z = 0 ; q != z ; z++){
            if (maze[i][z] == 1)
                lol[i][z] = '*';
            if (maze[i][z] == 2)
                lol[i][z] = 'o';
            if (maze[i][z] == 0)
                lol[i][z] = 'X';
        }
    }
    for (int i = 0; i != m->H -1 ; i++){
        printf("%s\n", lol[i]);
    }
    printf("%s", lol[m->H-1]);
    for (int i = 0; i != m->H ; i++){
        free(lol[i]);
    }
    free(lol);
}