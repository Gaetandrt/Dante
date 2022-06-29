/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-lemin-guillaume.lemoine
** File description:
** my_atoi
*/

#include "include/my.h"

void clean_mycaract(solver_t *solver, int i, int j)
{
    if (solver->map[i][j] == '1')
        solver->map[i][j] = '*';
}

void cleanall(solver_t *solver)
{
    for (int i = 0; solver->map[i] != NULL; i++) {
        for (int j = 0; solver->map[i][j] != '\0'; j++)
            clean_mycaract(solver, i, j);
    }
}
