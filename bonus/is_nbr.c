/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "tetris.h"
#include <criterion/criterion.h>

Test(is_nbr, nbr)
{
	cr_assert_eq(is_nbr("1 2 3 4 52"), 0);
}

Test(is_nbr, str)
{
	cr_assert_eq(is_nbr("abcdefd "), 1);
}
