/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "tetris.h"

void display_help(void)
{
	my_putstr("Usage:\t./tetris [options]\nOptions:\n --help\t\t\tDisplay");
	my_putstr(" this help\n -L --level={num}\tStart Tetris at level num (");
	my_putstr("def: 1)\n -l --key-left={k}\tMove the tetrimino LEFT using");
	my_putstr(" the K key (def: left arrow)\n -r --key-right={K}\tMove ");
	my_putstr("the tetrimino RIGHT using the K key (def: right arrow)\n ");
	my_putstr("-t --key-turn={K}\tTURN the tetrimino clockwise 90d using ");
	my_putstr("the K key (def: top arrow)\n -d --key-drop={K}\tDROP the ");
	my_putstr("tetrimino using the K key (def: down arrow)\n -q --key-");
	my_putstr("quit={K}\tQUIT the game using the K key (def: 'q' key)\n -");
	my_putstr("p --key-pause={K}\tPAUSE/RESTART the game using the K key ");
	my_putstr("(def: space bar)\n --map-size={row,col}\tSet the numbers ");
	my_putstr("of rows and colums of the map (def: 20,10)\n -w --without-");
	my_putstr("next\tHide next tetrimino (def: false)\n -D --debug\t\t");
	my_putstr("Debug mode (def: false)\n");
}

int main(int ac, char **av)
{
	// piece_t **pieces;
	int *the_floor;
	int i = -1;

	if (ac  > 1 && my_strcmp(av[1], "--help") == 0) {
		display_help();
		return (0);
	}
	if ((the_floor = malloc(sizeof(int) * (10 + 1))) == NULL)
		return (84);
	display_game();
	while (++i < 10)
		the_floor[i] = 20 + 1;
	the_floor[i] = '\0';
	// if ((pieces = create_pieces()) == NULL)
	// 	return (84);
	game(the_floor);
	return (0);
}
