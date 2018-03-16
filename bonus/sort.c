/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get next line
*/

#include "tetris.h"
#include <criterion/criterion.h>

Test(copy_array, simple)
{
	char **res;
	char **base;

	base = malloc(sizeof(char*) * 7);
	base[0] = "This";
	base[1] = "is";
	base[2] = "a";
	base[3] = "simple";
	base[4] = "test";
	base[5] = ".";
	base[6] = NULL;

	res = copy_array(base);

	for (int i = 0; base[i] != NULL; i++) {
		cr_assert_str_eq(base[i], res[i]);
	}
}
