/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "../includes/phoenix.h"

char **convertint(int **maze, int x, int y)
{
    char **lol = malloc(sizeof(char *) * y);
    for (int p = y , i = 0 ; i != p ; i++){
        lol[i] = malloc(sizeof(char ) * x + 1);
        for (int q = x, z = 0 ; q != z ; z++){
            if (maze[i][z] >= 5)
                lol[i][z] = '*';
            if (maze[i][z] < 5)
                lol[i][z] = 'X';
        }
    }
        for (int i = 0; i != y -1 ; i++){
        printf("%s\n", lol[i]);
    }
    printf("%s", lol[y-1]);
    for (int i = 0; i != y ; i++){
        free(lol[i]);
    }
    free(lol);
}

char **convertint2(int **maze, int x, int y)
{
    char **lol = malloc(sizeof(char *) * y);
    for (int p = y , i = 0 ; i != p ; i++){
        lol[i] = malloc(sizeof(char ) * x + 1);
        for (int q = x, z = 0 ; q != z ; z++){
            if (maze[i][z] == 1)
                lol[i][z] = '*';
            if (maze[i][z] == 0)
                lol[i][z] = 'X';
        }
    }
        for (int i = 0; i != y -1 ; i++){
        printf("%s\n", lol[i]);
    }
    printf("%s", lol[y-1]);
    for (int i = 0; i != y ; i++){
        free(lol[i]);
    }
    free(lol);
}

char **perfect(char **av)
{
    char const *str = "perfect";
    if (my_wrdcmp(av[3], str)){
        perfect2(av);
    }
    else {printf("wrong");
    exit(0);}
}

int main(int ac, char **av)
{
    if (ac < 3) return 84;
    if (ac > 3) perfect(av);
    imperfect(av);
    return 0;
}
