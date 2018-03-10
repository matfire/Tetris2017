/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get next line
*/

#include "tetris.h"

int check_arg_key(char *arg)
{
	if (arg == NULL)
		return (1);
	if (my_strlen(arg) != 1)
		return (1);
	if (!(arg[0] >= 'a' && arg[0] <= 'z') && !(arg[0] <= 'Z' && arg[0] >= 'A'))
		return (1);
	return (0);
}
