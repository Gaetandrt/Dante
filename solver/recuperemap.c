/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-lemin-guillaume.lemoine
** File description:
** my_atoi
*/

#include "include/my.h"

int nb_caract(char *filepath, solver_t *solver)
{
    int fd = open(filepath, O_RDONLY);
    int count = 0;
    int count_line = 0;
    char c = '\0';
    int first_line = 0;

    while (read (fd, &c, 1)) {
        if (c == '\n' || c == '\0')
            count_line++;
        if (count_line == 0)
            first_line++;
        count++;
    }
    solver->y = count_line + 1;
    solver->nb_words = count;
    solver->x = first_line + 1;
    return count;
}

void recuperemap(char *filepath, solver_t *solver)
{
    char **map = NULL;
    int count = nb_caract(filepath, solver);
    int fd = open(filepath, O_RDONLY);
    char c = '\0';
    int i = 0;
    int y = 0;

    map = malloc(sizeof(char *) * (solver->y + 1));
    for (int i = 0; i < (solver->y + 1); i++)
        map[i] = malloc(sizeof(char) * (solver->x + 1));
    while (read (fd, &c, 1)) {
        map[i][y] = c;
        y++;
        if (c == '\n' || c == '\0') {
            map[i][y] = '\0';
            i++;
            y = 0;
        }
    }
    map[i][y] = '\0';
    map[i + 1] = NULL;
    solver->map = map;
}
