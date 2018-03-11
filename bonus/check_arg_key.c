/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get next line
*/

#include "tetris.h"
#include <criterion/criterion.h>

Test(check_arg_key, simple)
{
	cr_assert_eq(check_arg_key(NULL), 1);
}

Test(check_arg_key, correct)
{
	cr_assert_eq(check_arg_key("a"), 0);
}

Test(check_arg_key, error_len)
{
	cr_assert_eq(check_arg_key("AB"), 1);
}

Test(check_arg_key, error_key)
{
	cr_assert_eq(check_arg_key("-"), 1);
}

Test(check_arg_key, error)
{
	cr_assert_eq(check_arg_key(""), 1);
}
