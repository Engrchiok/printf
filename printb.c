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

int printb(va_list *p, char b, int *c)
{
	int d, prlen = 0;

	if (b == 'b')
	{
		d = va_arg(*p, int);
		*c = *c + 2;
		if (d < 0 || d == '\0')
		{
			return (prlen);
		}
		else
		{
			return (pribin(d, &prlen));
		}
	}
	else
		return (prlen);
}
