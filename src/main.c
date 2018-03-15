/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "tetris.h"

struct termios set_term_no_enter(void)
{
	struct termios orig;
	struct termios info;
	tcgetattr(0, &orig);
	info = orig;
	info.c_lflag &= ~ICANON;
	info.c_cc[VMIN] = 1;
	info.c_cc[VTIME] = 0;
	tcsetattr(0, TCSANOW, &info);
	return (orig);
}

void restore_term(struct termios orig)
{
	tcsetattr(0, TCSANOW, &orig);
}

void wait_for_key_press(void)
{
	struct termios orig;
	my_putstr("Press any key to start Tetris\n");
	orig = set_term_no_enter();
	while(read(0, NULL, 1) == 0);
	restore_term(orig);
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
	} else if (GAME.is_help) {
		display_help(av);
		return (0);
	}
	if ((pieces = create_pieces()) == NULL)
		return (84);
	if ((the_floor = malloc(sizeof(int) * (10 + 1))) == NULL)
		return (84);
	display_game();
	while (++i < GAME.map_size[1])
		the_floor[i] = GAME.map_size[0] + 1;
	the_floor[i] = '\0';
	game(the_floor, pieces);
	return (0);
}
