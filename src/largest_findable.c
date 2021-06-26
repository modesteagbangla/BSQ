/*
** EPITECH PROJECT, 2021
** largest_findable.c
** File description:
** largest_findable
*/

#include "../include/bsq.h"

int largest_findable(char **str, int line, int colonne)
{
    int carre = 1, check = 0;

    while ((check = square_of_size(str, carre, line, colonne)) != 84)
        carre++;
    return (carre - 1);
}
