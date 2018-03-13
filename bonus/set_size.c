/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get next line
*/

#include "tetris.h"
#include <criterion/criterion.h>

Test(set_size, low)
{
	set_size(10, 20);
	cr_assert_eq(GAME.map_size[0], 10);
	cr_assert_eq(GAME.map_size[1], 20);
}

Test(set_size, middle)
{
	set_size(50, 200);
	cr_assert_eq(GAME.map_size[0], 50);
	cr_assert_eq(GAME.map_size[1], 200);
}

Test(set_size, big)
{
	set_size(1000, 2000);
	cr_assert_eq(GAME.map_size[0], 1000);
	cr_assert_eq(GAME.map_size[1], 2000);
}
