/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get next line
*/

#include "tetris.h"

int check_dir(int ch, char *arg)
{
//	if (check_arg_key(arg))
	//	return (1);
	switch (ch) {
		case 'l':
			GAME.key_left = arg[0];
			break;
		case 'r':
			GAME.key_right = arg[0];
			break;
		case 'd':
			GAME.key_drop = arg[0];
			break;
		case 't':
			GAME.key_turn = arg[0];
			break;
		case 'q':
			GAME.key_quit = arg[0];
			break;
		case 'p':
			GAME.key_pause = arg[0];
			break;
		default:
			return (1);
	}
	return (0);
}

int check_condition(int ch, char *arg)
{
	// && check_level(ch, arg) && check_extra(ch, arg)
	if (check_dir(ch, arg))
		return (1);
	return (0);
}

int set_conditions(int ac, char **av)
{
	int ch = 0;
	static struct option long_options[] = {
		{"help", no_argument, NULL, 'h'},
		{"level", required_argument, NULL, 'L'},
		{"key-left", required_argument, NULL, 'l'},
		{"key-right", required_argument, NULL, 'r'},
		{"key-turn", required_argument, NULL, 't'},
		{"key-drop", required_argument, NULL, 'd'},
		{"key-quit", required_argument, NULL, 'q'},
		{"key-pause", required_argument, NULL, 'p'},
		{"map-size", required_argument, NULL, 'm'},
		{"without-next", required_argument, NULL, 'w'},
		{"debug", required_argument, NULL, 'D'},
		{NULL, 0, NULL, 0}
	};
	while ((ch = getopt_long(ac, av, "h:L:l:r:t:d:q:p:m:w:D", long_options, NULL)) != -1)
		if (check_condition(ch, optarg))
			return (1);
}
