#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * printc - function that prints a character specifier.
 * @p: function parameter.
 * @c: function parameter.
 * @b: function parameter.
 * @a: function parameter.
 * Return: always variable value of prlen.
 */

int printc(va_list p, char a, char b, int *c)
{
	int d, prlen = 0;

	if (a == '%' && b == 'c')
	{
		d = va_arg(p, int);
		*c = *c + 2;
		if (d != '\0')
		{
			write(1, &d, 1);
			return (prlen += 1);
		}
		else
			return (prlen);
	}
	else
		return (prlen);
}
