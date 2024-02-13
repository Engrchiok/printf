#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * prints - function that prints strings.
 * @p: function parameter.
 * @a: function parameter.
 * @b: function parameter.
 * @c: function parameter.
 * Return: always prlen.
 */

int prints(va_list p, char a, char b, int *c)
{
	char *d;
	int prlen = 0;

	if (a == '%' && b == 's')
	{
		d = va_arg(p, char *);
		if (d != NULL)
		{			
			write(1, d, _strlen(d));
			*c = (*c + 2);
			return (prlen += _strlen(d));
		}
		else
			exit (-1);
	}
	else
		return (prlen);
}
