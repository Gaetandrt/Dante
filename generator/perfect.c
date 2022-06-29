/*
** EPITECH PROJECT, 2022
** generator
** File description:
** dante
*/

#include "include/my.h"

void myperfect(game_t *game)
{
    char **buffer = NULL;
    int m = 0;

    buffer = malloc(sizeof(char *) * game->y + 1);
    game->temp = 0;
    for (int i = 0; i < game->y; i++)
        buffer[i] = malloc(sizeof(char) * game->x + 1);
    game->buffer = buffer;
    for (int z = 0; z < game->y; z++) {
        for (int i = 0; i < game->x; i++)
            game->buffer[z][i] = 'X';
    }
    for (int z = 0; z < game->y; z++)
        game->buffer[z][game->x] = '\0';
    game->buffer[0][0] = '*';
    if (game->y > 0 || game->x > 0)
        game->buffer[game->y - 1][game->x - 1] = '*';
    perfectlaby(game);
}

void perfectlaby(game_t *game)
{
    for (int i = 0; game->buffer[i] != NULL; i++) {
        if (i % 2 == 0)
            rempliretoile(game, i, '*', 0);
        if (i % 2 == 1)
            rempliretoile(game, i, 'X', 1);
    }
}

void rempliretoile(game_t *game, int z, char c, int g)
{
    int m = rand() % (game->x - 2) + 1;

    for (int i = 0; game->buffer[z][i] != '\0'; i++) {
        game->buffer[z][i] = c;
    }
    if (g == 1 && z !=  game->y - 1) {
        game->buffer[z][m] = '*';
    }
}
