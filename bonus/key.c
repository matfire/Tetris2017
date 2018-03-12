/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get next line
*/

#include "tetris.h"
#include <criterion/criterion.h>

Test(set_key, left_arrow)
{
	set_key();
	cr_assert_eq(GAME.key_left, 68);
}

Test(set_key, down_arrow)
{
	set_key();
	cr_assert_eq(GAME.key_drop, 66);
}

Test(set_key, up_arrow)
{
	set_key();
	cr_assert_eq(GAME.key_turn, 65);
}

Test(set_key, right_arrow)
{
	set_key();
	cr_assert_eq(GAME.key_right, 67);
}

Test(set_key, pause_arrow)
{
	set_key();
	cr_assert_eq(GAME.key_pause, 112);
	cr_assert_eq(GAME.key_quit, 113);
}
