/*
** EPITECH PROJECT, 2018
** PSU_tetris_2017
** File description:
** le jeu
*/

#include "tetris.h"

int piece_floor(int *xy, int *the_floor)
{
	if (the_floor[xy[1] - 23] == xy[0] + 1) {
		the_floor[xy[1] - 23] -= 1;
		return(-1);
	}
	return (0);
}

int *gravit(int i, int *xy, int *the_floor)
{
	int nb_lvl = 15000;

	if ((i % nb_lvl) == 0) {
		if (piece_floor(xy, the_floor) != -1) {
			mvprintw(xy[0], xy[1], " ");
			xy[0]++;
			mvprintw(xy[0], xy[1], "*");
			move(0, 0);
			return (xy);
		} else {
			xy[0] = 2;
			xy[1] = 28;
			return (xy);
		}
	}
	return (xy);
}

int move_piece(int *xy, char l_r, int *wall)
{
	mvprintw(xy[0], xy[1], " ");
	if (l_r == 'l' && wall[xy[0]] != xy[1] - 1) {
		xy[1]--;
		mvprintw(xy[0], xy[1], "*");
		move(0, 0);
	} else if (l_r == 'r' && wall[xy[0]] != xy[1] + 1) {
		xy[1]++;
		mvprintw(xy[0], xy[1], "*");
		move(0, 0);
	} else {
		mvprintw(xy[0], xy[1], "*");
		move(0, 0);
	}
	return (xy[1]);
}

int *the_wall(int *the_floor, int nb)
{
	int *wall = malloc(sizeof(int) * (the_floor[0]));
	int i = -1;

	while (++i < the_floor[0])
		wall[i] = nb;
	wall[i] = '\0';
	return (wall);
}

int game(int *the_floor)
{
	int i = 1;
	int *xy = malloc(sizeof(int) * (3));
	int ch;
	int *wall_left = the_wall(the_floor, 22);
	int *wall_right = the_wall(the_floor, 23 + 10);

	xy[0] = 2;
	xy[1] = 28;
	mvprintw(xy[0], xy[1], "*");
	move(0, 0);
	while (42) {
		xy = gravit(i, xy, the_floor);
		i++;
		timeout(0);
		ch = getch();
		if (ch == 32) {
			endwin();
			return (0);
		} else if (ch == KEY_LEFT)
			xy[1] = move_piece(xy, 'l', wall_left);
		else if (ch == KEY_RIGHT)
			xy[1] = move_piece(xy, 'r', wall_right);
		refresh();
	}
	return (0);
}
