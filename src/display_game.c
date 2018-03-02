/*
** EPITECH PROJECT, 2018
** PSU_tetris_2017
** File description:
** the game
*/

#include "tetris.h"

void display_tetris2(void)
{
	attron(COLOR_PAIR(3));
	mvprintw(0, 7, " ***");
	mvprintw(1, 7, "  * ");
	mvprintw(2, 7, "  * ");
	mvprintw(3, 7, "  * ");
	mvprintw(4, 7, "  * ");
	attroff(COLOR_PAIR(3));
	attron(COLOR_PAIR(4));
	mvprintw(0, 11, " ***");
	mvprintw(1, 11, " * *");
	mvprintw(2, 11, " ** ");
	mvprintw(3, 11, " * *");
	mvprintw(4, 11, " * *");
	attroff(COLOR_PAIR(4));
	attron(COLOR_PAIR(5));
	mvprintw(0, 15, " *");
	mvprintw(1, 15, "  ");
	mvprintw(2, 15, " *");
	mvprintw(3, 15, " *");
	mvprintw(4, 15, " *");
	attroff(COLOR_PAIR(5));
	attron(COLOR_PAIR(6));
	mvprintw(0, 17, " ***");
	mvprintw(1, 17, " *  ");
	mvprintw(2, 17, " ***");
	mvprintw(3, 17, "   *");
	mvprintw(4, 17, " ***");
	attroff(COLOR_PAIR(6));
}

void display_tetris(void)
{
	char t[] = "***\n * \n * \n * \n * \n";

	start_color();
	init_pair(1, COLOR_RED, COLOR_BLACK);
	init_pair(2, COLOR_BLUE, COLOR_BLACK);
	init_pair(3, COLOR_YELLOW, COLOR_BLACK);
	init_pair(4, COLOR_GREEN, COLOR_BLACK);
	init_pair(5, COLOR_CYAN, COLOR_BLACK);
	init_pair(6, COLOR_MAGENTA, COLOR_BLACK);
	attron(COLOR_PAIR(1));
	printw("%s", t);
	attroff(COLOR_PAIR(1));
	attron(COLOR_PAIR(2));
	mvprintw(0, 3, " ***");
	mvprintw(1, 3, " *  ");
	mvprintw(2, 3, " ** ");
	mvprintw(3, 3, " *  ");
	mvprintw(4, 3, " ***");
	attroff(COLOR_PAIR(2));
	display_tetris2();
}

void display_game(piece_t **pieces)
{
	int ch;
	int i = 3;

	initscr();
	raw();
	keypad(stdscr, TRUE);
	display_tetris();
	mvprintw(0, 21, " +------------------------------------+ /-next----\\");
	mvprintw(1, 21, " |                                    | |         |");
	mvprintw(2, 21, " |                                    | |         |");
	mvprintw(3, 21, " |                                    | \\---------/");
	while (++i < 42)
		mvprintw(i, 21, " |                                    |");
	mvprintw(i, 21, " +------------------------------------+");
	// while (42) {
	// 	ch = getch();
	// 	// if (ch == KEY_UP)
	// 	// else if (ch == KEY_LEFT)
	// 	// else if (ch == KEY_DOWN)
	// 	// else if (ch == KEY_RIGHT)
	// 	refresh();
	// 	if (ch == 32) {
	// 		endwin();
	// 		return (0);
	// 	}
	// }
}

/*
65 -> fléche du haut
66 -> fléche du bas
67 -> fléche de droite
68 -> fléche de gauche
32 -> espace
*/
