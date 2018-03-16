/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

int is_nbr(char *str)
{
	for (int i = 0; str[i] != '\0'; i++) {
		if (!(str[i] >= '0' && str[i] <= '9') && str[i] != ' ')
			return (1);
	}
	return (0);
}
