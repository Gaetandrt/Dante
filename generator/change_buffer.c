/*
** EPITECH PROJECT, 2022
** generator
** File description:
** dante
*/

#include "include/my.h"

void change_autour_x(game_t *game)
{
    if (game->x1 >= 0 && game->x1 + 1 < game->x) {
        if (game->buffer[game->y2][game->x1 + 1] == 'n') {
            game->buffer[game->y2][game->x1 + 1] = '2';
        }
    }
    if (game->x1 > 0 && game->x1 - 1 >= 0) {
        if (game->buffer[game->y2][game->x1 - 1] == 'n') {
            game->buffer[game->y2][game->x1 - 1] = '2';
        }
    }
    if (game->x1 >= 0 && game->x1 < game->x && game->y2 + 1 < game->y) {
        if (game->buffer[game->y2 + 1][game->x1] == 'n')
            game->buffer[game->y2 + 1][game->x1] = '2';
    }
    if (game->x1 >= 0 && game->x1 < game->x && game->y2 - 1 >= 0) {
        if (game->buffer[game->y2 - 1][game->x1] == 'n')
            game->buffer[game->y2 - 1][game->x1] = '2';
    }
}

void change_autour_y(game_t *game)
{
    if (game->y2 >= 0 && game->y2 + 1 < game->y) {
        if (game->buffer[game->y2 + 1][game->x1] == 'n')
            game->buffer[game->y2 + 1][game->x1] = '2';
    }
    if (game->y2 > 0 && game->y2 - 1 >= 0) {
        if (game->buffer[game->y2 - 1][game->x1] == 'n')
            game->buffer[game->y2 - 1][game->x1] = '2';
    }
    if (game->y2 >= 0 && game->y2 < game->y && game->x1 + 1 < game->x) {
        if (game->buffer[game->y2][game->x1 + 1] == 'n')
            game->buffer[game->y2][game->x1 + 1] = '2';
    }
    if (game->y2 >= 0 && (game->y2 < game->y) && (game->x1 - 1 >= 0)) {
        if (game->buffer[game->y2][game->x1 - 1] == 'n')
            game->buffer[game->y2][game->x1 - 1] = '2';
    }
}

void m_change(game_t *game, int m)
{
    if (m == 1 && game->x1 + 1 < game->x) {
        if (game->buffer[game->y2][game->x1 + 1] == '2') {
            game->buffer[game->y2][game->x1 + 1] = '3';
        }
        game->x1 += 1;
        change_autour_x(game);
    }
    if (m == 2 && game->y2 + 1 < game->y) {
        if (game->buffer[game->y2 + 1][game->x1] == '2') {
            game->buffer[game->y2 + 1][game->x1] = '3';
        }
        game->y2 += 1;
        change_autour_y(game);
        }
    if (m == 3 && game->x1 - 1 >= 0) {
        if (game->buffer[game->y2][game->x1 - 1] == '2') {
            game->buffer[game->y2][game->x1 - 1] = '3';
        }
        game->x1 -= 1;
        change_autour_x(game);
    }
    if (m == 4 && game->y2 - 1 >= 0) {
        if (game->buffer[game->y2 - 1][game->x1] == '2') {
            game->buffer[game->y2 - 1][game->x1] = '3';
            game->y2 -= 1;
            change_autour_y(game);
        }
    }
}

void change(game_t *game)
{
    int m = value_aleatoire(game);

    if (game->y2 == 0 && game->x1 == 0 && game->y2 + 1 < game->y) {
        if (game->buffer[game->y2 + 1][game->x1] == 'n')
            game->buffer[game->y2 + 1][game->x1] = '2';
        if (game->buffer[game->y2][game->x1 + 1] == 'n')
            game->buffer[game->y2][game->x1 + 1] = '2';
    }
    if (check_fin(game, game->x1, game->y2) != 1) {
        m_change(game, m);
    }
}
