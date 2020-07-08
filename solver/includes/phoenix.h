/*
** EPITECH PROJECT, 2019
** phoenix
** File description:
** phoenix
*/

#ifndef MY_H_
#define MY_H_
/*
** EPITECH PROJECT, 2020
** my
** File description:
** my
*/

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct trash_s {
    int H;
    int W;
    int x;
    int y;
    int **sol;
} trash_t;


void print(int **sol, trash_t *m);
bool saf(int **maze, int x, int y, trash_t *m);
bool solve2(int **maze, int x, int y, trash_t *m);
bool solve(int **maze, trash_t *m);
int maze(char **tab);
char **thetab(char *str);
int tablen(char **tab);


char **intochar(int **maze, trash_t *m);

void fs_cat_x_bytes(char const *filepath, int x);
void my_putchar(char c);
char *load_file_in_mem(char const *filepath);
void fs_print_first_line(char const *filepath);
int fs_get_number_from_first_line(char const *filepath);
void fs_understand_return_of_read(int fd, char *buffer, int size);
int to_number(char const *str);
int my_putstr(char const *str);
void my_putchar(char c);
int fs_open_file(char const *filepath);
void fs_cat_500_bytes2(char const *filepath);
void fs_cat_500_bytes(char const *filepath);
void array_1d_print_chars(char const *arr);
void array_1d_print_ints(int const *arr, int size);
int my_strlen(char *str);
int show_number(int nb);
int array_1d_sum(int const *arr, int size);
int array_2d_sum(int **arr, int nb_rows, int nb_cols);
char *mem_alloc(char const *a, char const *b);
char *my_strcpy(char *dest, char const *src, char const *src2);
char **mem_dup_2d_array(char **arr, int nb_rows, int nb_cols);
char *duplicate_string(char const *src);
int backslashnlen(char *buffer);
int my_strlen(char *str);



#endif  /* MY_H_ */
