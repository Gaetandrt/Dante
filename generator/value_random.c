/*
** EPITECH PROJECT, 2022
** generator
** File description:
** dante
*/

#include "include/my.h"

int value_aleatoire(game_t *game)
{
    int i = rand() % 4 + 1;

    return i;
}
