/*
** EPITECH PROJECT, 2021
** principale_function.c
** File description:
** principale_function
*/

#include "../include/bsq.h"

int function_bsq(char const *filepath)
{
    var err_r;

    stat(filepath, &err_r.momo);
    err_r.fd = open(filepath, O_RDONLY);
    if (err_r.fd == -1)
        return (84);
    else {
        err_r.buf = malloc(err_r.momo.st_size +1);
        err_r.rd = read(err_r.fd, err_r.buf, err_r.momo.st_size);
        err_r.er = error(err_r.rd, err_r.buf);
        if (err_r.er == 84)
            return (84);
        else {
            err_r.tab = double_table(err_r.buf, filepath);
            err_r.value = find_square(err_r.tab);
            largest_findable_square(err_r.tab, err_r.value);
        }
    }
    my_free(err_r.tab);
    close(err_r.fd);
}
