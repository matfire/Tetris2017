/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
**
*/

int my_getnbr(char const *str)
{
	int valeur = 0;
	int i = -1;
	int neg = 1;

	if (str[0] == '-') {
		neg = -1;
		i++;
	}
	while (str[++i] != '\0') {
		valeur *= 10;
		valeur += str[i] - 48;
	}
	valeur *= neg;
	return (valeur);
}
