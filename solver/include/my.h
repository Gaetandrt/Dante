/*
** EPITECH PROJECT, 2021
** Day09
** File description:
** File Header
*/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <assert.h>
#include <string.h>
#include <dirent.h>
#include <stdlib.h>
#include <pwd.h>
#include <time.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <time.h>
#include <stdbool.h>

#ifndef MY_H
    #define MY_H

typedef struct solver_s {
    int x;
    int nb_words;
    int y;
    char **map;
    int temp;
    bool solv;
    int temp_x;
    int temp_y;
} solver_t;


int my_atoi(char *str);
void my_putchar(char c);
int my_strcmp(char const *s1, char const *s2);
int my_put_nbr(int nb);
int my_strncmp(char const *s1, char const *s2, int n);
int my_putstr(char const *str);
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_getnbr(char *str);
void recuperemap(char *filepath, solver_t *solver);
int nb_caract(char *filepath, solver_t *solver);

int turn_etoile(solver_t *solver);
int turn_number(solver_t *solver);
void solve_map(solver_t *solver);
int value_change(solver_t *solver, int x, int y, int temp);
void cleanall(solver_t *solver);
void clean_mycaract(solver_t *solver, int i, int j);
void myprint(solver_t *solver);







#endif
