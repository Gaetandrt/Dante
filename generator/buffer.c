/*
** EPITECH PROJECT, 2022
** generator [WSL: Ubuntu]
** File description:
** buffer
*/

#include "include/my.h"

void buffer(game_t *game, char **argv)
{
    my_buffer(game);
    remplace_chiffre(game);
    myprint(game);
}

void my_buffer(game_t *game)
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
            game->buffer[z][i] = 'n';
    }
    for (int z = 0; z < game->y; z++)
        game->buffer[z][game->x] = '\0';
    game->buffer[0][0] = '3';
    if (game->y > 0 || game->x > 0)
        game->buffer[game->y - 1][game->x - 1] = '4';
    laby(game);
}

void myprint(game_t *game)
{
    char c = '\n';

    for (int i = 0; game->buffer[i] != NULL; i++) {
        write(1, game->buffer[i], game->x);
        if (game->buffer[i + 1] != NULL)
            write(1, &c, 1);
    }
}
