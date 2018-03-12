/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get next line
*/

#include "tetris.h"

void debug_mode(void)
{
	my_putstr("*** DEBUG MODE ***\nKey Left :\t");
	write(1, &GAME.key_left, 1);
	my_putstr("\nKey Right :\t");
	write(1, &GAME.key_right, 1);
	my_putstr("\nKey Turn :\t");
	write(1, &GAME.key_turn, 1);
}
