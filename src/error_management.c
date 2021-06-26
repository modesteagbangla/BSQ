/*
** EPITECH PROJECT, 2021
** error_management.c
** File description:
** error_management
*/

#include "../include/bsq.h"

int error_management(char const *str)
{
    int i = 0, j = 0;

    if (str[0] < '0' && str[0] > '9' && str[0] < '0')
        return (84);
    while (str[i] != '\0') {
        if (str[i] == '\n')
            j++;
        i++;
    }
    if (my_getnbr(str) != (j-1))
        return (84);
    return (0);
}
