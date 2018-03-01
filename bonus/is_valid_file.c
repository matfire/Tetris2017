/*
** EPITECH PROJECT, 2018
** is_valid_line
** File description:
** get next line
*/

#include "tetris.h"
#include <criterion/criterion.h>

Test(find_char, simple)
{
	cr_assert_eq(find_char("tetri", 't'), 0);
}

Test(find_char, no_match)
{
	cr_assert_eq(find_char("abcdef", 'g'), -1);
}
