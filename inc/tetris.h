

#ifndef MY_TETRIS

#define MY_TETRIS

#include <curses.h>
#include <unistd.h>
#include "get_next_line.h"
#include <sys/types.h>
#include <stdlib.h>
#include <dirent.h>

typedef struct piece_s {
	char **shape;
	int color;
}		piece_t;

#endif

void my_putstr(char *str);
int my_strcmp(char *s1, char *s2);
int my_strlen(char *str);
