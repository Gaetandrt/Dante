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

#ifndef MY_H
    #define MY_H

typedef struct s_location {

    int x;
    int y;

} location_t;

typedef struct game_s {
    int x;
    int y;
    int x1;
    int y2;
    char **buffer;
    int j;
    int z;
    int *nb;
    int temp;
    int haut;
    int *pos;
    int save;
    int i_max;
    int j_max;
    int jj;
    int obs;
} game_t;

typedef struct solver_s {
    int x;
    int y;
}solver_t;

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
void buffer(game_t *game, char **argv);
void my_buffer(game_t *game);
int value_aleatoire(game_t *game);
void change_autour_x(game_t *game);
void change_autour_y(game_t *game);
void m_change(game_t *game, int m);
void change(game_t *game);
void laby(game_t *game);
int check_fin(game_t *game, int x, int y);
void char_fin(game_t *game, int i, int z);
void remplace_chiffre(game_t *game);
int my_getnbr(char *str);
int errorhand(int argc, char **argv);
void my_exec(game_t *game, char **argv);
void perfectlaby(game_t *game);
void rempliretoile(game_t *game, int z, char c, int g);
void myprint(game_t *game);
void myperfect(game_t *game);

#endif
