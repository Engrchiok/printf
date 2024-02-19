#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * prints - function that prints strings.
 * @p: function parameter.
 * @a: function parameter.
 * @b: function parameter.
 * @c: function parameter.
 * Return: always prlen.
 */

int prints(va_list *p, char b, int *c)
{
	char *d;
	int prlen = 0;

	if (b == 's')
	{
		d = va_arg(*p, char *);
		*c = *c + 2;
		if (d != NULL)
		{			
			write(1, d, _strlen(d));
			return (prlen += _strlen(d));
		}
		else
			return (prlen);
	}
	else
		return (prlen);
}
