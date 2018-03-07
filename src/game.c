/*
** EPITECH PROJECT, 2018
** PSU_tetris_2017
** File description:
** le jeu
*/

#include "tetris.h"

int piece_floor(int xy[], int *the_floor)
{
	// if (xy[0] + 1 == 21)
	// 	return (-1);
	if (the_floor[xy[1] - 23] == xy[0] + 1) {
		the_floor[xy[1] - 23] += 1;
		return(-1);
	}
	return (0);
}

int gravit(int i, int xy[], int *the_floor)
{
	int nb_lvl = 150000;
	int x = xy[0];
	int y = xy[1];

	if ((i % nb_lvl) == 0) {
		if (piece_floor(xy, the_floor) != -1) {
			mvprintw(x, y, " ");
			x++;
			my_put_int(x);
			mvprintw(x, y, "*");
			move(0, 0);
			return (x);
		} else
			return (-1);
	}
	return (xy[0]);
}

int game(int *the_floor)
{
	int i = 1;
	int xy[] = {2, 28};
	int x = xy[0];
	int y = xy[1];

	mvprintw(x, y, "*");
	move(0, 0);
	while (xy[0] != -1) {
		xy[0] = gravit(i, xy, the_floor);
		//getch voir si NULL
		i++;
		refresh();
	}
	while (42) {
		if (getch() == KEY_UP) {
			endwin();
			return (0);
		}
	}
	return (0);
}
