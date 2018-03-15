/*
** EPITECH PROJECT, 2018
** PSU_tetris_2017
** File description:
** __DESCRIPTION__
*/

#include "tetris.h"

void clear_piece(int *xy, char **piece)
{
	int i = -1;
	int j = 22;

	while (piece[++i] != NULL) {
		while (++j - 22 < GAME.map_size[1])
			mvprintw(xy[0] + i, j, " ");
		j = 22;
	}
}

void display_piece(int *xy, char **piece)
{
	int i = -1;

	while (piece[++i] != NULL) {
		mvprintw(xy[0] + i, xy[1], "%s", piece[i]);
	}
}
