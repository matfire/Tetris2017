/*
** EPITECH PROJECT, 2018
** is_valid_line
** File description:
** get next line
*/

#include "tetris.h"
#include <criterion/criterion.h>

Test(contains_str, simple)
{
	cr_assert_eq(contains_str("base", "base"), 0);
}

Test(contains_str, complex)
{
	cr_assert_eq(contains_str("bass", "base"), 1);
}
