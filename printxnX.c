#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * printx - function that prints hexadecimal integer soecifier.
 * @p: function parameter.
 * @b: function parameter.
 * @c: function parameter.
 * Return: always prlen.
 */

int printxnX(va_list *p, char b, int *c)
{
	int prlen = 0;
	unsigned int d;

	if (b == 'x')
	{
		d = va_arg(*p, unsigned int);
		*c += 2;
		if (d == '\0' || d < 0)
			return (prlen);
		else
			return (prix(d, &prlen));
	}
	else if (b == 'X')
	{
		d = va_arg(*p, unsigned int);
		*c += 2;
		if (d == '\0' || d < 0)
			return (prlen);
		else
			return (priX(d, &prlen));
	}
	else
		return (prlen);
}
