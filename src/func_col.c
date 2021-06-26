/*
** EPITECH PROJECT, 2021
** func_col.c
** File description:
** func_col
*/

#include "../include/bsq.h"

int func_col(int nb)
{
    int i = 0;
    int h = nb / 10;

    while (h != 0) {
        h = h / 10;
        i++;
    }
    return (i + 2);
}
