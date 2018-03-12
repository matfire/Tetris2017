/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "tetris.h"

void display_help(char **av)
{
	my_putstr("Usage:\t");
	my_putstr(av[0]);
	my_putstr("\nOptions:\n --help\t\t\tDisplay "
	"this help\n -L --level={num}\tStart Tetris at level num (def: 1)\n -l "
	"--key-left={k}\tMove the tetrimino LEFT using the K key (def: left "
	"arrow)\n -r --key-right={K}\tMove the tetrimino RIGHT using the K key "
	"(def: right arrow)\n -t --key-turn={K}\tTURN thr tetrimino clockwise "
	"90d using the K key (def: top arrow)\n -d --key-drop={K}\tDROP the "
	"tetrimino using the K key (def: down arrow)\n -q --key-quit={K}\tQUIT "
	"the game using the K key (def: 'q' key)\n -p --key-pause={K}\tPAUSE/"
	"RESTART the game using the K key (def: space bar)\n --map-size={row,"
	"col}\tSet the numbers of rows and colums of the map (def: 20,10)\n -w "
	"--without-next\tHide next tetrimino (def: false)\n -D --debug\t\tDebug"
	" mode (def: false)\n");
}
