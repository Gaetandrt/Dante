/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-lemin-guillaume.lemoine
** File description:
** my_atoi
*/

#include "include/my.h"

int my_atoi(char *str)
{
    int res = 0;
    int i = 0;
    int sign = 1;

    if (str[0] == '-') {
        sign *= -1;
        i += 1;
    }
    while (str[i] != '\0') {
        res *= 10;
        res += str[i] - '0';
        i++;
    }
    return (res * sign);
}

int my_getnbr(char *str)
{
    int x = 0;

    while (*str) {
        if (*str >= '0' && *str <= '9') {
            x *= 10;
            x += *str - '0';
            }
        else
            return (-1);
        str++;
    }
    return x;
}
