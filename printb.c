#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * printd - function that prints binary integers.
 * @p: function parameter.
 * @a: function parameter.
 * @b: function parameter.
 * @c: function parameter.
 * Return: always prlen.
 */

int printb(va_list p, char a, char b, int *c)
{
	int d, prlen = 0;

	(void)a;
	if (b == 'b')
	{
		d = va_arg(p, int);
		*c = *c + 2;
		if (d < 0)
		{
			return (prlen);
		}
		else
		{
			return (prlen += pribin(d));
		}
	}
	else
		return (prlen);
}
