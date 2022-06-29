/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-lemin-guillaume.lemoine
** File description:
** my_atoi
*/

#include "include/my.h"

void solve_map(solver_t *solver)
{
    int temp = 0;
    int temp2 = 0;
    solver->temp_x = 0;
    solver->temp_y = 0;
    int x = 0;

    solver->map[0][0] = 'o';
    while (solver->temp_x != (solver->x - 1) && solver->temp_y != (solver->y)) {
        while (turn_etoile(solver) != -1) {
            if (solver->temp_x == (solver->x - 2) && solver->temp_y == (solver->y - 1))
                return;
        }
        if ( turn_number(solver) != -1) {
            x++;
        }
    }
}

int turn_etoile(solver_t *solver)
{
    if (solver->temp_x < (solver->x - 2) ) {
        if (solver->map[solver->temp_y][solver->temp_x + 1] == '*' ) {
            solver->map[solver->temp_y][solver->temp_x + 1] = 'o';
            if (solver->map[solver->temp_y][solver->temp_x + 1] == 'o')
                solver->temp_x += 1;
            return 1;
        }
    }
    if (solver->temp_y < (solver->y - 1)) {
        if (solver->map[solver->temp_y + 1][solver->temp_x] == '*') {
            solver->map[solver->temp_y][solver->temp_x] = 'o';
        if (solver->map[solver->temp_y + 1][solver->temp_x] == '*') {
            solver->map[solver->temp_y + 1][solver->temp_x] = 'o';
            solver->temp_y += 1;
        }
        return 3;
        }
    }
    if (solver->temp_y > 0) {
        if (solver->map[solver->temp_y - 1][solver->temp_x] == '*') {
            solver->map[solver->temp_y - 1][solver->temp_x] = 'o';
            solver->temp_y -= 1;
            return 4;
        }
    }
    if (solver->temp_x > 0) {
        if (solver->map[solver->temp_y][solver->temp_x - 1] == '*') {
            solver->map[solver->temp_y][solver->temp_x] = 'o';
            solver->temp_x -= 1;
            return 2;
    }
    }

    return -1;
}

int turn_number(solver_t *solver)
{
    if (solver->map [solver->temp_y] [solver->temp_x - 1] == 'o') {
        solver->map [solver->temp_y] [solver->temp_x] = '1';
        solver->temp_x -= 1;
        return 1;
    }
    if (solver->map [solver->temp_y - 1] [solver->temp_x] == 'o') {
        solver->map [solver->temp_y] [solver->temp_x] = '1';
        solver->temp_y += 1;
        return 3;
    }
    if (solver->map [solver->temp_y + 1] [solver->temp_x] == 'o') {
        solver->map [solver->temp_y] [solver->temp_x] = '1';
        solver->temp_y -= 1;
        return 4;
    }
    if (solver->map [solver->temp_y] [solver->temp_x + 1] == 'o') {
        solver->map [solver->temp_y] [solver->temp_x ] = '1';
        solver->temp_x += 1;
        return 2;
    }
    return -1;
}

