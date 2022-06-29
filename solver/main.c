/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-lemin-guillaume.lemoine
** File description:
** my_atoi
*/

#include "include/my.h"

void myprint(solver_t *solver)
{
    char c = '\n';

    for (int i = 0; solver->map[i] != NULL; i++) {
        write(1, solver->map[i], solver->x - 1);
        if (solver->map[i + 1] != NULL)
            write(1, &c, 1);
    }
}

int main(int argc, char **argv)
{
    char *filepath = argv[1];
    int fd = open(filepath, O_RDONLY);
    solver_t *solver = malloc(sizeof(solver_t));

    if (argc != 2)
        return 84;
    if (fd < 0)
        return 84;
    recuperemap(filepath, solver);
    if (solver->y <= 0 || solver->x <= 0)
        return 84;
    solve_map(solver);
    cleanall(solver);
    myprint(solver);
    return 0;
}
