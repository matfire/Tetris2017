/*
** EPITECH PROJECT, 2018
** PSU_tetris_2017
** File description:
**
*/

#ifndef MY_TETRIS

#define MY_TETRIS

#include <curses.h>
#include <unistd.h>
#include "get_next_line.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <dirent.h>
#include <time.h>
#include "my.h"

typedef struct piece_s {
	char **shape;
	int color;
}		piece_t;

#endif

char *my_strcat(char *dest, char *src);
char **my_str_to_word_tab(char *str);
char *my_strcpy(char *src);
// int my_getnbr(char *str);
void my_putstr(char *str);
int my_strcmp(char *s1, char *s2);
int my_strlen(char *str);
int contains_str(char *str, char *base);
piece_t **create_pieces(void);
piece_t *add_block(char *file_name);
int is_valid_file(char *str);
int get_files_on_dir(void);
int is_current(char *file);
int find_char(char *str, char c);
void display_game();
int game(int *the_floor);
