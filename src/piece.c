/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get next line
*/

#include "tetris.h"

int is_valid_file(char *str)
{
	if (contains_str(str, "tetrimino"))
		return (1);
	return (0);
}

int get_files_on_dir(void)
{
	DIR *dir;
	int count = 0;
	struct dirent *file;

	dir = opendir("tetriminos");
	if (dir == NULL)
		return (-1);
	for (int i = 0; (file = readdir(dir)) != NULL; i++) {
		if (is_valid_file(file->d_name))
			continue;
		else
			count += 1;
	}
	closedir(dir);
	return (count);
}

piece_t **create_pieces(void)
{
	int count;
	piece_t **pieces;
	DIR *dir;

	if ((count = get_files_on_dir()) <= 0)
		return (NULL);
	pieces = malloc(sizeof(piece_t*) * (count + 1));
	pieces[count] = NULL;
	dir = opendir("tetriminos");
	//for (int i = 0; i < count; i++)
	//	pieces[i] = create_block(dir);
	closedir(dir);
	return (pieces);
}
