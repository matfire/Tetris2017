/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get next line
*/

#include "tetris.h"

int get_files_on_dir(void)
{
	DIR *dir;
	int count = 0;

	dir = opendir("tetriminos");
	if (dir == NULL)
		return (-1);
	return (count);
}

blocks_t *create_pieces(void)
{
	blocks_t *res;
	int count = 1;

	if ((count = get_files_on_dir()) == -1 || count == 0)
		return (NULL);
	res = malloc(sizeof(blocks_t));
	res->pieces = malloc(sizeof(char**) * (count + 1));
	res->pieces[count] = NULL;
	return (res);
}
