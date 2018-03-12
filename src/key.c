/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get next line
*/

#include "tetris.h"

int set_key(void)
{
	GAME.key_left = 68;
	GAME.key_right = 67;
	GAME.key_drop = 66;
	GAME.key_turn = 65;
	GAME.key_pause = 112;
	GAME.key_quit = 113;
	return (0);
}
