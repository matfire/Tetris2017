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

int is_current(char *file)
{
	if (file[0] == '.')
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
		if (is_valid_file(file->d_name) || is_current(file->d_name))
			continue;
		else
			count += 1;
	}
	closedir(dir);
	return (count);
}
