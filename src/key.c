/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get next line
*/

#include "tetris.h"

void set_size(int width, int height)
{
	GAME.map_size = malloc(sizeof(int) * 2);
	GAME.map_size[0] = width;
	GAME.map_size[1] = height;
}

int set_key(void)
{
	GAME.key_left = 68;
	GAME.key_right = 67;
	GAME.key_drop = 66;
	GAME.key_turn = 65;
	GAME.key_pause = 112;
	GAME.key_quit = 113;
	GAME.is_debug = 0;
	GAME.is_help = 0;
	GAME.level = 1;
	GAME.without_next = 0;
	set_size(20, 10);
	return (0);
}
