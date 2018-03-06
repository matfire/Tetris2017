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
	else {
		//res = add_block(file->d_name);
	}
	if (res != NULL)
		return (res);
	res->color = 84;
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
	pieces[count] = NULL;
	dir = opendir("tetriminos");
	//for (int i = 0; i < count; i++) {
	//	pieces[i] = create_block(dir);
	//}
	closedir(dir);
	return (pieces);
}
