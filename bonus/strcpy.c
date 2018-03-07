/*
** EPITECH PROJECT, 2018
** split
** File description:
** split
*/

#include "tetris.h"
#include <criterion/criterion.h>

Test(strcpy, simple)
{
	char *line;

	line = "This is a test";
	cr_assert_str_eq("This is a test", my_strcpy(line));
}
