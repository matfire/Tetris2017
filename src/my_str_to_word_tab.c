/*
** EPITECH PROJECT, 2018
** split
** File description:
** split
*/

#include "tetris.h"

int get_words(char *str)
{
	int i = 1;
	int n = 0;

	for (; str[n] != '\0' && str[n] != '\n'; n++) {
		if (str[n] == ' ')
			i++;
	}
	return (i);
}

int get_word_len(char *str, int index)
{
	int i = index;
	int n = 1;

	for (; str[i] != '\0' && str[i] != ' '; i++)
		n++;
	return (n);
}

char **my_str_to_word_tab(char *str)
{
	char **res;
	int n = 0;
	int m = 0;

	res = malloc(sizeof(char*) * (get_words(str) + 1));
	res[get_words(str)] = 0;
	for (int i = 0; i < get_words(str); i++) {
		res[i] = malloc(sizeof(char) * (get_word_len(str, n) + 1));
		for (m = 0; str[n] != ' ' && str[n] != '\0'; n++) {
			res[i][m] = str[n];
			m++;
		}
		n++;
		res[i][m] = '\0';
	}
	return (res);
}
