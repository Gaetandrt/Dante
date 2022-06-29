/*
** EPITECH PROJECT, 2022
** generator
** File description:
** dante
*/

#include "include/my.h"

void laby(game_t *game)
{
    int value = 0;
    int c = 0;

    game->x1 = 0;
    game->y2 = 0;
    while (check_fin(game, game->x1, game->y2) != 1) {
        change(game);
        c++;
        if (check_fin(game, game->x1, game->y2) == 1)
            break;
    }
}
