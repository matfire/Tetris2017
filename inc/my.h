/*
** EPITECH PROJECT, 2018
** PSU_navy_2017
** File description:
** le point h de la lib
*/

#ifndef MY_H
#define MY_H

#include <unistd.h>
#include <math.h>
#include <stdio.h>

void my_putchar(char c);
void my_putstr(char *str);
void my_put_double_str(char **str);

int my_put_int(int nb);
void my_put_nbr(double nb, int deci);
int my_compute_power_it(int nb, int p);

int my_strlen(char *str);

#endif
