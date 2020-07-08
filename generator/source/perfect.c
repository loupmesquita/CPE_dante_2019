/*
** EPITECH PROJECT, 2020
** perfect
** File description:
** perfect
*/

#include "../includes/phoenix.h"

char **perfect2(char **av)
{
    int x = atoi(av[1]);
    int y = atoi(av[2]);
    srand(time(NULL));
    int **lol = malloc(sizeof(int *) * y);
    for (int i = 0, q = y ; i != q ; i++){
        lol[i] = malloc(sizeof(int) * x);
        for (int z = 0, m = x ; z != m ; z++){
            lol[i][z] = 0;
        }
    }
    for (int i = 0, q = y ; i != q ; i++){
        for (int z = 0, m = x ; z != m ; z++){
            lol[0][0] = 1;
            lol[y-1][x-1] = 1;
            if (!oneontwo(i)) lol[i][z] = 1;
        }
        if (oneontwo(i)) lol[i][machin(x)] = 1;
    }
    convertint2(lol, x, y);
    exit(0);
}

bool oneontwo(int o)
{
    int y = o % 2;

    if (y == 0) return true;
    if (y == 1) return false;
}

int machin(int o)
{
    int m = -1;
    while (m < 0 || m > o){
        m = rand() % o;
    }
    return (m);
}

char **imperfect2(char **av, int x, int y, int **lol)
{
    for (int i = 0, q = y ; i != q ; i++){
        for (int z = 0, m = x ; z != m ; z++){
            lol[0][0] = 1;
            lol[y-1][x-1] = 1;
            if (!oneontwo(i)) {
                lol[i][z] = 1;
            }
        }
        if (oneontwo(i)) {
            for (int n = x/3 ; n != 0 ; n--)
                lol[i][machin(x)] = 1;
        }
    }
    convertint2(lol, x, y);
    exit(0);
}

char **imperfect(char **av)
{
    int x = atoi(av[1]);
    int y = atoi(av[2]);
    srand(time(NULL));
    int **lol = malloc(sizeof(int *) * y);
    for (int i = 0, q = y ; i != q ; i++){
        lol[i] = malloc(sizeof(int) * x);
        for (int z = 0, m = x ; z != m ; z++){
            lol[i][z] = 0;
        }
    }
    imperfect2(av, x, y, lol);
}
