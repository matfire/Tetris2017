/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "tetris.h"

int is_nbr(char *str)
{
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] <= '9' && str[i] >= '0')
			continue;
		else if (str[i] == ' ' || str[i] == '\n')
			continue;
		else
			return (1);
	}
	return (0);
}
