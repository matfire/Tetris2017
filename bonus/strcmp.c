/*
** EPITECH PROJECT, 2018
** is_valid_line
** File description:
** get next line
*/

#include "tetris.h"
#include <criterion/criterion.h>

Test(strcmp, simple)
{
	cr_assert_eq(my_strcmp("baba", "baba"), 0);
}

Test(strcmp, diff)
{
	cr_assert_eq(my_strcmp("babb", "baba"), 1);
}

Test(strcm, normal)
{
	cr_assert_eq(my_strcmp("baba", "babb"), -1);
}
