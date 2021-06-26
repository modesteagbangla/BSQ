/*
** EPITECH PROJECT, 2021
** error.c
** File description:
** error
*/

#include "../include/bsq.h"

int error (int rd, char *buf)
{
    int error_m = error_management(buf);

    if (rd == -1)
        return (84);
    else if (error_m == 84)
        return (84);
}
