/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
** append s2 to s1
*/

#include "tetris.h"

char *my_strcat(char *dest, char *src)
{
	int i = 0;
	int y = 0;

	char *res;

	res = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));
	while (dest[i] != '\0') {
		res[i] = dest[i];
		i++;
	}
	while (src[y] != '\0') {
		res[i] = src[y];
		i++;
		y++;
	}
	res[i] = '\0';
	return (res);
}
