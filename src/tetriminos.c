/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get next line
*/

#include "tetris.h"

void print_tetriminos_count(void)
{
	my_putstr("Tetriminos:\t");
	my_put_nbr(get_files_on_dir());
	my_putstr("\n");
}

void print_tetriminos_name(char *name)
{
	int i = 0;
	char *name_truncated;

	name_truncated = malloc(sizeof(char) * my_strlen(name));
	for (i = 0; name[i] != '\0' && name[i] != '.'; i++)
		name_truncated[i] = name[i];
	name_truncated[i] = '\0';
	my_putstr("Name ");
	my_putstr(name_truncated);
	my_putstr(" :\t");
}

void print_tetriminos_size_color_shape(piece_t *piece)
{
	int size = 0;

	my_putstr("Size ");
	my_put_nbr(my_strlen(piece->shape[0]));
	my_putstr("*");
	for (; piece->shape[size] != NULL; size++);
	my_put_nbr(size);
	my_putstr(" :\tColor ");
	my_put_nbr(piece->color);
	my_putstr("\n");
}

void print_tetriminos_data(piece_t *piece)
{
	my_putstr("Tetriminos :\t");
	print_tetriminos_name(piece->name);
	if (piece->color == 84)
		my_putstr("Error\n");
	else
		print_tetriminos_size_color_shape(piece);
}
