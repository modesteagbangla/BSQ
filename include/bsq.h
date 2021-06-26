/*
** EPITECH PROJECT, 2021
** bsq.h
** File description:
** bsq
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

typedef struct declaration var;
struct declaration
{
    int rd;
    int fd;
    char *buf;
    int er;
    char **tab;
    int *value;
    struct stat momo;
};

char **double_table(char *buff, char const *filepath);
int *find_square(char **str);
int largest_findable(char **str, int line, int colonne);
int square_of_size(char **str, int carre, int line, int colum);
int largest_findable_square(char **str, int *tab);
void my_free(char **tab);
int function_bsq(char const *filepath);
int my_getnbr(char const *str);
int bsq_handler(char const *str);
int func_col(int nb);
int error (int rd, char *buf);
int error_management(char const *str);
