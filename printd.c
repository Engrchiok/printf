#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * printd - function that prints base 10 sihned numbers.
 * @p: function parameter.
 * @a: function parameter.
 * @b: function parameter.
 * @c: function parameter.
 * Return: always prlen.
 */

int printd(va_list p, char a, char b, int *c)
{
	int d, prlen = 0;

	if (a == '%' && (b == 'd' || b == 'i'))
	{
		d = va_arg(p, int);
		*c = *c + 2;
		if (d < 0)
		{
			write(1, "-", 1);
			prlen += 1;
			d = -(d);
			return (prlen += prinum(d));
		}
		else if (d >= 0)
		{
			return (prlen += prinum(d));
		}
		else
			return (prlen);
	}
	else
		return (prlen);
}
