/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "tetris.h"

void display_help(void)
{
	my_putstr("Usage:\t./tetris [options]\nOptions:\n -help\t\tDisplay ");
	my_putstr("this help\n -l -level={num}\tStart Tetris at level num (");
	my_putstr("def: 1)\n -kl -key-left={k}\tMove the tetrimino LEFT using");
	my_putstr(" the K key (def: left arrow)\n -kr -key-right={K}\tMove ");
	my_putstr("the tetrimino RIGHT using the K key (def: right arrow)\n ");
	my_putstr("-kt -key-turn={K}\tTURN the tetrimino clockwise 90d using ");
	my_putstr("the K key (def: top arrow)\n -kd -key-drop={K}\tDROP the ");
	my_putstr("tetrimino using the K key (def: down arrow)\n -kq -key-");
	my_putstr("quit={K}\tQUIT the game using the K key (def: 'q' key)\n -");
	my_putstr("kp -key-pause={K}\tPAUSE/RESTART the game using the K key ");
	my_putstr("(def: space bar)\n -map-size={row,col}\t Set the numbers ");
	my_putstr("of rows and colums of the map (def: 20,10)\n -w -without-");
	my_putstr("next\tHide next tetrimino (def: false)\n -d -debug\t\t");
	my_putstr("Debug mode (def: false)\n");
}

int main(int ac, char **av)
{
	DIR *dir;
	piece_t **pieces;

	if (my_strcmp(av[1], "-help") == 0)
		display_help();
	// if ((pieces = create_pieces()) == NULL)
		// return (84);
	display_game(pieces);
	return (0);
}
