/*
** EPITECH PROJECT, 2018
** PSU_tetris_2017
** File description:
**
*/

#ifndef MY_TETRIS

#define MY_TETRIS

#include <curses.h>
#include <getopt.h>
#include <termios.h>
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
	char *name;
	char **shape;
	int color;
}		piece_t;

struct settings_s {
	int level;
	int is_debug;
	int is_help;
	char key_left;
	char key_right;
	char key_turn;
	char key_drop;
	char key_quit;
	char key_pause;
	int *map_size;
	int without_next;
}		settings_t;

#define GAME settings_t

char *my_strcat(char *dest, char *src);
char **my_str_to_word_tab(char *str);
char *my_strcpy(char *src);
int my_getnbr(char *str);
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
void display_help(char **av);
void debug_mode(void);
int check_dir(int ch, char *arg);
int check_condition(int ch, char *arg);
int check_extra(int ch, char *arg);
int set_conditions(int ac, char **av);
int game(int *the_floor, piece_t **pieces);
int check_arg_key(char *arg);
int check_level_error(char *arg);
int set_key(void);
int my_put_nbr(int nb);
int my_printf(const char *format, ...);
void set_size(int width, int height);
void print_tetriminos_count(void);
void print_tetriminos_data(piece_t *piece);
#endif
