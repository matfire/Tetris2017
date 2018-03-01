/*
** EPITECH PROJECT, 2018
** PSU_tetris_2017
** File description:
** the game
*/

#include "tetris.h"

void display_game(piece_t **pieces)
{
	int ch;

	initscr();
	raw();
	keypad(stdscr, TRUE);
	printw("*** *** *** *** * *** +-------------------+ /-next----\\");
	ch = getch();
	if (ch == KEY_F(1))
		printw(" *  *    *  * *   *   |");
	refresh();
	getch();
	endwin();
}
