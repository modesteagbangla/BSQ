/*
** EPITECH PROJECT, 2021
** square_of_size.c
** File description:
** square_of_size
*/

#include "../include/bsq.h"

int *find_square(char **str)
{
    int *tab = malloc(sizeof(int) * 3);
    tab[0] = 0, tab[1] = 0, tab[2] = 0;
    int i, j, check = 0, find = 0, pos_a = 0, pos_b = 0;

    for (i = 0; str[i] != NULL; i++) {
        for (j = 0; str[i][j] != '\0'; j++) {
            check = largest_findable(str, i, j);
            if (check > tab[0]) {
                tab[0] = check;
                tab[1] = i;
                tab[2] = j;
            }
        }
    }
    return (tab);
}
