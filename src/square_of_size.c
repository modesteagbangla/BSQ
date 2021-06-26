/*
** EPITECH PROJECT, 2021
** square_of_size.c
** File description:
** square_of_size
*/

#include "../include/bsq.h"

int square_of_size(char **str, int carre, int line, int colum)
{
    int i, j, x = 0, y = 0;

    for (i = line; i < line + carre && str[i] != NULL; i++) {
        for (j = colum; j < colum + carre && str[i][j] != '\0'; j++) {
            if (str[i][j] != '.')
                return (84);
        }
        if (j < colum + carre)
            return (84);
    }
    if (i < line + carre)
        return (84);
    return (0);
}
