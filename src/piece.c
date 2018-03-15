/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get next line
*/

#include "tetris.h"

piece_t *create_block(DIR *dir)
{
	struct dirent *file;
	piece_t *res;

	res = malloc(sizeof(piece_t) * 1);
	if ((file = readdir(dir)) != NULL && (is_current(file->d_name) || is_valid_file(file->d_name)))
		file = readdir(dir);
	else if (file != NULL) {
		res = add_block(file->d_name);
	}
	return (res);

}

piece_t *add_block(char *file_name)
{
	char *file_path;
	char *line;
	char **data_tetrimino;
	piece_t *res;
	int fd = 0;
	int i = 0;

	res = malloc(sizeof(piece_t) * 1);
	file_path = my_strcat("tetriminos/", file_name);
	fd = open(file_path, O_RDONLY);
	line = get_next_line(fd);
	res->name = my_strcpy(file_name);
	if (line == NULL) {
		res->color = 84;
		return (res);
	}
	data_tetrimino = my_str_to_word_tab(line);
	free(line);
	res->shape = malloc(sizeof(char*) * (my_getnbr(data_tetrimino[1]) + 1));
	while ((line = get_next_line(fd)) != NULL) {
		if (i > my_getnbr(data_tetrimino[1]) || my_strlen(line) > my_getnbr(data_tetrimino[0]))
			res->color = 84;
		res->shape[i] = my_strcpy(line);
		free(line);
		i++;
	}
	res->shape[my_getnbr(data_tetrimino[1])] = NULL;
	if (res->color != 84)
		res->color = my_getnbr(data_tetrimino[2]);
	free(data_tetrimino);
	close(fd);
	free(file_path);
	return (res);
}

piece_t **create_pieces(void)
{
	int count;
	piece_t **pieces;
	DIR *dir;

	if ((count = get_files_on_dir()) <= 0)
		return (NULL);
	pieces = malloc(sizeof(piece_t*) * (count + 1));
	dir = opendir("tetriminos");
	pieces[count] = NULL;
	for (int i = 0; i < count; i++) {
		pieces[i] = create_block(dir);
	}
	closedir(dir);
	return (pieces);
}
