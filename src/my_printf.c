/*
** EPITECH PROJECT, 2017
** disp.c
** File Description:
**
*/

#include <stdarg.h>
#include <unistd.h>
#include "tetris.h"

int my_printf(const char *format, ...)
{
	va_list list;
	int i = 0;

	va_start(list, format);
	for (; format[i] != '\0'; i++) {
		if (format[i] == '%') {
			i++;
			switch (format[i]) {
				case 'c':
					my_putchar((char)
						va_arg(list, int) - 48);
					break;
				case 's':
					my_putstr(va_arg(list, char*));
					break;
				case 'd':
					my_put_int(va_arg(list, int));
					break;
				default:
					my_putchar(format[i]);
					break;
			}
		} else
			my_putchar(format[i]);
	}
	va_end(list);
	return (0);
}
