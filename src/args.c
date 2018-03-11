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

int check_level_error(char *arg)
{
	int nb = my_getnbr(arg);

	if (nb <= 0 || nb > 10)
		return (1);
	return (0);
}

int check_extra(int ch, char *arg)
{
	switch (ch) {
		case 'D':
			//debug_mode();
			break;
		case 'm':
			//set_map_size(arg);
			break;
		case 'w':
			GAME.without_next = 1;
			break;
		case 'h':
			display_help();
			break;
		default:
			return (1);
	}
	return (0);
}
