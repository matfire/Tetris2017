/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get next line
*/

#include "tetris.h"

void print_next(void)
{
	if (GAME.without_next)
		my_putstr("Next :\tNo\n");
	else
		my_putstr("Next :\tYes\n");
}

void print_level_size(void)
{
	my_putstr("Level :\t");
	my_put_nbr(GAME.level);
	my_putstr("\nSize :\t");
	my_put_nbr(GAME.map_size[0]);
	my_putstr("*");
	my_put_nbr(GAME.map_size[1]);
	my_putstr("\n");
}

void print_tetriminos(void)
{
	piece_t **pieces;
	pieces = create_pieces();
	print_tetriminos_count();
	for (int i = 0; pieces[i] != NULL;  i++)
		print_tetriminos_data(pieces[i]);
}

void debug_mode(void)
{
	my_putstr("*** DEBUG MODE ***\nKey Left :\t");
	write(1, &GAME.key_left, 1);
	my_putstr("\nKey Right :\t");
	write(1, &GAME.key_right, 1);
	my_putstr("\nKey Turn :\t");
	write(1, &GAME.key_turn, 1);
	my_putstr("\nKey Drop :\t");
	write(1, &GAME.key_drop, 1);
	my_putstr("\nKey Quit :\t");
	write(1, &GAME.key_quit, 1);
	my_putstr("\nKey Pause :\t");
	write(1, &GAME.key_pause, 1);
	my_putstr("\n");
	print_next();
	print_level_size();
	print_tetriminos();
}
