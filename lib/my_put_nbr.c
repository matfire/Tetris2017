/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
**
*/

#include "my.h"

int my_compute_power_it(int nb, int p)
{
	int a = nb;

	if (p == 0) {
		return (1);
	} else if (p < 0) {
		return (0);
	}
	while (p != 1) {
		nb = nb * a;
		p = p - 1;
	}
	return (nb);
}

int my_put_int(int nb)
{
	int nombre;

	if (nb < 0) {
		nb = -nb;
		my_putchar('-');
	}
	if (nb > 9)
		my_put_int(nb / 10);
	nombre = nb % 10 + 48;
	my_putchar(nombre);
	return (0);
}

void my_put_nbr(double nb, int deci)
{
	int entier = (int) nb;
	double dif = nb - entier;
	int ten = my_compute_power_it(10, deci);

	my_put_int(entier);
	if (dif > 0) {
		my_putchar('.');
		dif = dif * ten;
		my_put_int((int) dif);
	}
}
