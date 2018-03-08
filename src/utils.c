/*
** EPITECH PROJECT, 2018
** utils
** File description:
** utils
*/

#include "tetris.h"

int my_strlen(char *str)
{
 	int i = 0;

 	for (; str[i] != '\0'; i++);
 	return (i);
}

void my_putstr(char *str)
{
 	write(1, str, my_strlen(str));
}

int my_strcmp(char *s1, char *s2)
{
	int i = 0;

	while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int find_char(char *str, char c)
{
	int i = 0;

	for (; str[i] != '\0'; i++) {
		if (str[i] == c) {
			return (i);
		}
	}
	return (-1);
}

int contains_str(char *str, char *base)
{
	int i = find_char(str, '.') + 1;
	int y = 0;

	if (i == -1)
		return (1);
	for (y = 0; str[i] == base[y] && str[i] != '\0' && base[y] != '\0'; i++, y++);
	if (i == my_strlen(str))
		return (0);
	return (1);

}
