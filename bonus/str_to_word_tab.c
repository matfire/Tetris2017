/*
** EPITECH PROJECT, 2018
** split
** File description:
** split
*/

#include "tetris.h"
#include <criterion/criterion.h>

Test(str_to_word_tab, simpleTest)
{
	char **expected;
	char **got;

	expected = my_str_to_word_tab("This is a simple test");
	got = my_str_to_word_tab("This is a simple test");
	for (int i = 0; got[i] != NULL; i++) {
		cr_assert_str_eq(expected[i], got[i]);
	}
}
