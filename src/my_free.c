/*
** EPITECH PROJECT, 2021
** my_free.c
** File description:
** my_free
*/

#include "../include/bsq.h"

void my_free(char **tab)
{
    for (int a = 0; tab[a] != NULL; a++)
        free(tab[a]);
    free(tab);
}
