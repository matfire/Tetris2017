/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get next line
*/

#include "tetris.h"

piece_t **sort_pieces(piece_t **pieces)
{
	piece_t **res;
	int *order;

	order = malloc(sizeof(int) * (get_files_on_dir() + 1));
	res = malloc(sizeof(piece_t*) * (get_files_on_dir() + 1));
	res[get_files_on_dir()] = NULL;
	for (int i = 0; pieces[i] != NULL; i++) {
		for (int y = 1; pieces[y] != NULL; y++) {
			if (my_strcmp(pieces[y]->name, pieces[y - 1]->name) > 0) {
				order[i] = y - 1;
			} else
				order[i] = y;
		}
	}
	res = copy_pieces(pieces, order);
	free(order);
	free(pieces);
	return (res);
}

char **copy_array(char **array)
{
	char **res;
	int len = 0;
	int i = 0;

	for (; array[len] != NULL; len++);
	res = malloc(sizeof(char*) * (len + 1));
	for (; array[i] != NULL; i++)
		res[i] = my_strcpy(array[i]);
	res[i] = NULL;
	return (res);
}

piece_t **copy_pieces(piece_t **pieces, int *order)
{
	piece_t **res;

	res = malloc(sizeof(piece_t*) * (get_files_on_dir() + 1));
	res[get_files_on_dir()] = NULL;
	for (int i = 0; pieces[i] != NULL; i++) {
		res[i] = malloc(sizeof(piece_t));
		res[i]->name = my_strcpy(pieces[order[i]]->name);
		res[i]->color = pieces[order[i]]->color;
		res[i]->shape = copy_array(pieces[order[i]]->shape);
	}
	return (res);
}
