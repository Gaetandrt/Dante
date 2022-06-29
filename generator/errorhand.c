/*
** EPITECH PROJECT, 2022
** generator
** File description:
** dante
*/

#include "include/my.h"

int errorhand(int argc, char **argv)
{
    char *perfect = "perfect";
    char *imperfect = "imperfect";

    if (argc < 3 || argc > 4)
        return -1;
    if (my_getnbr(argv[1]) <= 2 || my_getnbr(argv[2]) <= 2)
        return -1;
    if (argc == 4 && my_strcmp(argv[3], perfect) != 0 &&
    my_strcmp(argv[3], imperfect) != 0)
        return -1;
    return 0;
}
