/*
** EPITECH PROJECT, 2019
** phoenix
** File description:
** phoenix
*/

#ifndef MY_H_
#define MY_H_
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <time.h>
#include <grp.h>
#include <pwd.h>
#include <stdbool.h>

void my_putchar(char c);
int show_number(int nb);
int show_string(char const *str);
char *reverse_string (char *str);
int to_number (char const *str);
int is_prime_number(int nb);
char * my_strcpy(char *dest, char const *src);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strstr (char *str, char const *to_find);
void my_putstr(char const *str);
int my_strlen(char *str);
int jsp(void);
int mein(int ac, char **av);
int ls(char *av);
int ls1(char *av);
int ls2(char *av);
int lsa(char *av);
int lsl(char *av);
size_t thetime(char *s, size_t maxsize, const char *format,
                                        const struct tm *tp);
int printfcaze(const char *str, va_list args, ...);
int my_printf(const char *str, ...);
unsigned int my_put_nbroct(unsigned int nb);
unsigned int my_put_nbruns(unsigned int nb);
unsigned int my_put_nbrbin(unsigned int nb);
int my_put_nbrbase(char *str, int b, char x);
void my_put_nbrhex(unsigned int nb, char str);
void myprintp(long int nb, char str);
void my_put_nbrhexmin(long int nb, char str);
void my_put_nbrhexmin2(long int nb, char str);
int my_put_nbr(int nb);
void my_putbrhex2(long int nb, char str);
int flags(const char *str, int i, int final, va_list args);
int flags2(const char *str, int i, int final, va_list args);
int    my_printf(const char *str, ...);
void myprintp(long int nb, char str);
char *timedatho(char *str);
char *timebiche(char *str);
int pr(struct stat st);
int bientotlafin(char *av);
int lst(char * av);
char *concat_strings(char *dest, char const *src);
char *mem_alloc(char const *a, char const *b);
char *my_strcpycat(char *dest, char const *src, char const *src2);
int my_conststrlen(char const *str);
int print_all(char *av, struct dirent *reading, int blc);
int print_sd(struct stat st, int b, struct passwd *pw, struct group *gr);
int my_wrdcmp(char const *s1, char const *s2);
int my_strlencst(char const *str);
int my_strlen(char *str);
char **perfect2(char **av);
char **convertint2(int **maze, int x, int y);
bool oneontwo(int o);
int machin(int o);
char **imperfect(char **av);
char **imperfect2(char **av, int x, int y, int **lol);

#endif  /* MY_H_ */
