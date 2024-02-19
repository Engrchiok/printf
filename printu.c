#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * printu - function that prints unsigned numbers.
 * @p: function parameter.
 * @b: function parameter.
 * @c: function parameter.
 * Return: always prlen.
 */

int printu(va_list *p, char b, int *c)
{
	unsigned int a;
	int prlen = 0;

	if (b == 'u')
	{
		a = va_arg(*p, unsigned int);
		*c = *c + 2;
		if (a < 0 || a == '\0')
			return (prlen);
		else
		{
			return (prinunint(a, &prlen));
		}
	}
	else
		return (prlen);
}
