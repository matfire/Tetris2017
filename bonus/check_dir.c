/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get next line
*/

#include "tetris.h"
#include <criterion/criterion.h>

Test(check_dir, simple)
{
	cr_assert_eq(check_dir('l', "K"), 0);
}

Test(check_dir, error)
{
	cr_assert_eq(check_dir('e', NULL), 1);
}
