/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "../include/bsq.h"

int main(int ac, char **av)
{
    int checker = function_bsq(av[1]);
    if (checker == 84)
        return (84);
}