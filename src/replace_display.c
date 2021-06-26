/*
** EPITECH PROJECT, 2021
** largest_findable_square.c
** File description:
** largest_findable_square
*/

#include "../include/bsq.h"

int my_strlen(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}

int largest_findable_square(char **str, int *tab)
{
    int carre = tab[0], pos_x = tab[1], pos_y = tab[2], a = 0, b = 0;

    for (int i = pos_x; ((i < pos_x + carre) && (str[i] != NULL)); i++)
        for (int j = pos_y; ((j < pos_y + carre) && (str[i][j] != '\0')); j++)
            str[i][j] = 'x';

    for (int a = 0; str[a] != NULL; a++) {
        write(1, str[a], my_strlen(str[a]));
        write(1, "\n", 1);
    }
}
