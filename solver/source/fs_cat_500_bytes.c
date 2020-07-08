/*
** EPITECH PROJECT, 2020
** cat
** File description:
** cat
*/

#include "../includes/phoenix.h"

void fs_cat_500_bytes(char const *filepath)
{
    int x = 500;
    char *buffer = malloc(sizeof(char) * x);
    int i = 0;
    int fd = open(filepath, O_RDONLY);
    read(fd, buffer, x);
    char **tab = thetab(buffer);
    if (tab[0][0] == 'X'){
        printf("no solution found");
        exit(84);
    }
    maze(tab);
    close(fd);
}

int maze(char **tab)
{
    int i = 0;
    int m = 0;
    trash_t *mazet = malloc(sizeof(trash_t));
    mazet->H = tablen(tab);
    mazet->W = strlen(tab[0]);
    if (tab[mazet->H-1][mazet->W-1] == 'X'){
        printf("no solution found");
        exit(84);}
    mazet->x = 0, mazet->y = 0;
    int **lol = malloc(sizeof(int *) * mazet->H);
    for (int i = 0 ; tab[i] != NULL ; i++){
        lol[i] = malloc(sizeof(int) * mazet->W);
        for (int z = 0 ; tab[i][z] != '\0' ; z++){
            if (tab[i][z] == '*')
                lol[i][z] = 1;
            if (tab[i][z] == 'X')
                lol[i][z] = 0;
        }
    }
    if (solve(lol, mazet) == false) exit(84);
}

int tablen(char **tab)
{
    int m = 0;
    for (int i = 0 ; tab[i] != NULL ; i++){
        m++;
    }
    return m;
}
