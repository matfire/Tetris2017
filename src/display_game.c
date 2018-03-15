/*
** EPITECH PROJECT, 2018
** PSU_tetris_2017
** File description:
** the game
*/

#include "tetris.h"

char *line(int size, char first, char second, char end)
{
	int i = 0;
	char *line = malloc(sizeof(char) * (size + 3));

	line[0] = first;
	while (++i <= size)
	line[i] = second;
	line[i] = end;
	line[++i] = '\0';
	return (line);
}

void display_tetris3(void)
{
	int i = 0;

	mvprintw(5, 15, " *");
	attroff(COLOR_PAIR(5));
	attron(COLOR_PAIR(6));
	mvprintw(1, 17, " ***");
	mvprintw(2, 17, " *  ");
	mvprintw(3, 17, " ***");
	mvprintw(4, 17, "   *");
	mvprintw(5, 17, " ***");
	attroff(COLOR_PAIR(6));
	mvprintw(7, 0, "%s", line(17, '/', '-', '\\'));
	while (++i < 9)
		mvprintw(7 + i, 0, "%s", line(17, '|', ' ', '|'));
	mvprintw(7 + i, 0, "%s", line(17, '\\', '-', '/'));
}

void display_tetris2(void)
{
	attron(COLOR_PAIR(3));
	mvprintw(1, 7, " ***");
	mvprintw(2, 7, "  * ");
	mvprintw(3, 7, "  * ");
	mvprintw(4, 7, "  * ");
	mvprintw(5, 7, "  * ");
	attroff(COLOR_PAIR(3));
	attron(COLOR_PAIR(4));
	mvprintw(1, 11, " ***");
	mvprintw(2, 11, " * *");
	mvprintw(3, 11, " ** ");
	mvprintw(4, 11, " * *");
	mvprintw(5, 11, " * *");
	attroff(COLOR_PAIR(4));
	attron(COLOR_PAIR(5));
	mvprintw(1, 15, " *");
	mvprintw(2, 15, "  ");
	mvprintw(3, 15, " *");
	mvprintw(4, 15, " *");
	display_tetris3();
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
	mvprintw(1, 0, "%s", t);
	attroff(COLOR_PAIR(1));
	attron(COLOR_PAIR(2));
	mvprintw(1, 3, " ***");
	mvprintw(2, 3, " *  ");
	mvprintw(3, 3, " ** ");
	mvprintw(4, 3, " *  ");
	mvprintw(5, 3, " ***");
	attroff(COLOR_PAIR(2));
	display_tetris2();
}

void display_game(void)
{
	int i = 1;

	initscr();
	raw();
	keypad(stdscr, TRUE);
	display_tetris();
	mvprintw(1, 21, " %s", line(GAME.map_size[1], '+', '-', '+'));
	while (++i < GAME.map_size[0] + 1)
		mvprintw(i, 21, " %s", line(GAME.map_size[1], '|', ' ', '|'));
	mvprintw(i, 21, " %s", line(GAME.map_size[1], '+', '-', '+'));
	mvprintw(1, 24 + GAME.map_size[1], " /-next----\\");
	mvprintw(2, 24 + GAME.map_size[1], " |         |");
	mvprintw(3, 24 + GAME.map_size[1], " |         |");
	mvprintw(4, 24 + GAME.map_size[1], " \\---------/");
	mvprintw(9, 2, "High Score");
	mvprintw(10, 2, "Score");
	mvprintw(12, 2, "Lines");
	mvprintw(13, 2, "Level");
	mvprintw(15, 2, "Timer (ou pas)");
	refresh();
}

/*
65 -> fléche du haut
66 -> fléche du bas
67 -> fléche de droite
68 -> fléche de gauche
32 -> espace
*/
/*
Pour afficher le timer mettre le nombre dans un char *timer puis prendre la
position du dernier chiffre et faire position - strlen pour avoir un temps bien
placer
*/
