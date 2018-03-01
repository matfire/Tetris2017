/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
**
*/

#include "my.h"

void my_putchar(char c)
{
	write(1, &c, 1);
}

void my_putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		my_putchar(str[i]);
		i = i + 1;
	}
}

void my_put_double_str(char **str)
{
	int i = 0;

	while (str[i] != NULL) {
		my_putstr(str[i]);
		my_putchar(10);
		i = i + 1;
	}
}
