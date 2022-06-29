/*
** EPITECH PROJECT, 2022
** generator
** File description:
** dante
*/

#include "include/my.h"

void my_exec(game_t *game, char **argv)
{
    if (my_strcmp(argv[3], "perfect") == 0) {
            myperfect(game);
            game->buffer[game->y - 1][game->x - 1] = '*';
            myprint(game);
        }
        if (my_strcmp(argv[3], "imperfect") == 0) {
            buffer(game, argv);
        }
}
