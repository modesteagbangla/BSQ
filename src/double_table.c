/*
** EPITECH PROJECT, 2021
** double_table.c
** File description:
** double_table
*/

#include "../include/bsq.h"

char **double_table(char *buff, char const *filepath)
{
    struct stat momo;
    stat(filepath, &momo);
    int line = bsq_handler(buff);
    int checker_nbr = func_col(line);
    int ch = (((momo.st_size - checker_nbr) / line) - 1);
    char **tab = malloc(sizeof(char*) * line + 1);

    for (int jk = 0; jk < line; jk++)
        tab[jk] = malloc(sizeof(char) * ch+1);

    for (int i = 0, x = checker_nbr; i < line; i++) {
        for (int j = 0; j < ch; j++, x++) {
            tab[i][j] = buff[x];
        }
        x++;
    }
    return (tab);
}
