/*
** EPITECH PROJECT, 2020
** maze
** File description:
** maze
*/

#include "../includes/phoenix.h"

void print(int **sol, trash_t *m)
{
    intochar(sol, m);
}

bool saf(int **maze, int x, int y, trash_t *m)
{
    if (x >= 0 && x < m->H && y >= 0 && y < m->W && maze[x][y] == 1)
        return true;

    return false;
}

bool solve(int **maze, trash_t *m)
{
    m->sol = maze;

    if (solve2(maze, 0, 0, m) == false) {
        printf("no solution found");
        return false;
    }
    print(m->sol, m);
    return true;
}

bool solve2(int **maze, int x, int y, trash_t *m)
{
    if (x == m->H - 1 && y == m->W) {
        return true;
    }
    if (saf(maze, x, y, m) == true) {
        m->sol[x][y] = 2;
        if (solve2(maze, x + 1, y, m) == true)
            return true;
        if (solve2(maze, x, y + 1, m) == true)
            return true;
        m->sol[x][y] = 1;
        return false;
    }
    return false;
}
