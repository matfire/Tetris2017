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

	expected = malloc(sizeof(char*) * 6);
	expected[0] = "This";
	expected[1] = "is";
	expected[2] = "a";
	expected[3] = "simple";
	expected[4] = "test";
	got = my_str_to_word_tab("This is a simple test");
	for (int i = 0; got[i] != NULL; i++) {
		cr_assert_str_eq(expected[i], got[i]);
	}
}	
