/*
** EPITECH PROJECT, 2022
** generator
** File description:
** dante
*/

#include "include/my.h"

int check_fin(game_t *game, int x, int y)
{
    if (game->buffer[y][x] == '4')
        return 1;
    if (game->y2 + 1 < game->y) {
        if (game->buffer[y + 1][x] == '4')
        return 1;
    }
    if (y != 0) {
        if (game->buffer[y - 1][x] == '4')
            return 1;
    }
    if (game->x1 + 1 < game->x) {
        if (game->buffer[y][x + 1] == '4')
            return 1;
    }
    if (x != 0) {
        if (game->buffer[y][x - 1] == '4')
            return 1;
    }
    return 0;
}

void char_fin(game_t *game, int i, int z)
{
    int m = value_aleatoire(game);

    if (game->buffer[i][z] == 'n') {
        if (m % 2 == 0)
            game->buffer[i][z] = 'X';
    }
    if (game->buffer[i][z] == 'n') {
        if (m % 2 == 1)
            game->buffer[i][z] = '*';
    }
    if (game->buffer[i][z] == '3' || game->buffer[i][z] == '4')
        game->buffer[i][z] = '*';
    if (game->buffer[i][z] == '2')
        game->buffer[i][z] = 'X';
}

void remplace_chiffre(game_t *game)
{
    for (int i = 0; game->buffer[i] != NULL; i++) {
        for (int z = 0; game->buffer[i][z] != '\0'; z++)
            char_fin(game, i, z);
    }
}

int main(int argc, char **argv)
{
    game_t *game = malloc(sizeof(game_t));
    char *s = "aa";
    int a = my_atoi(s);

    srand(time(NULL));
    if (errorhand(argc, argv) == -1)
        return 84;
    game->x = my_atoi(argv[1]);
    game->y = my_atoi(argv[2]);
    if (game->y <= 0 || game->x <= 0)
        return 84;
    if (argv[3] != NULL)
        my_exec(game, argv);
    else
        buffer(game, argv);
    return 0;
}
