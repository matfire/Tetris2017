/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "tetris.h"

int main(int ac, char **av)
{
	piece_t **pieces;
	int *the_floor;
	int i = -1;

	if (set_conditions(ac, av))
		return (84);
	if (GAME.is_debug) {
		debug_mode();
	} else if (GAME.is_help) {
		display_help(av);
		return (0);
	}
	if ((pieces = create_pieces()) == NULL)
		return (84);
	if ((the_floor = malloc(sizeof(int) * (10 + 1))) == NULL)
		return (84);
	printf("%s$\n", pieces[0]->shape[0]);
	printf("%s$\n", pieces[0]->shape[1]);
	printf("%s$\n", pieces[0]->shape[2]);
	display_game();
	while (++i < GAME.map_size[1])
		the_floor[i] = GAME.map_size[0] + 1;
	the_floor[i] = '\0';
	game(the_floor, pieces);
	return (0);
}
