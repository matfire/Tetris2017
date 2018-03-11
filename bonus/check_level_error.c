/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get next line
*/

#include "tetris.h"
#include <criterion/criterion.h>

Test(check_level_error, simple)
{
	cr_assert_eq(check_level_error("3"), 0);
}

Test(check_level_error, error_neg)
{
	cr_assert_eq(check_level_error("0"), 1);
}

Test(check_level_error, error_max)
{
	cr_assert_eq(check_level_error("11"), 1);
}
