/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "tetris.h"

void wait_for_key_press(void)
{
	int ch = 0;
	my_putstr("Press any key to start Tetris\n");
	while ((ch = getch()) == -1);
}

int main(int ac, char **av)
{
	piece_t **pieces;
	int *the_floor;
	int i = -1;

	if (set_conditions(ac, av))
		return (84);
	if (GAME.is_debug) {
		debug_mode();
		wait_for_key_press();
	}
	if (GAME.is_help) {
		display_help(av);
		return (0);
	}
	if ((pieces = create_pieces()) == NULL)
		return (84);
	if ((the_floor = malloc(sizeof(int) * (10 + 1))) == NULL)
		return (84);
	display_game();
	while (++i < 10)
		the_floor[i] = 20 + 1;
	the_floor[i] = '\0';
	game(the_floor);
	return (0);
}
