#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * printperc - function that prints percentage sign.
 * @p: function parameter.
 * @a: function parameter.
 * @b: function parameter.
 * @c: function parameter.
 * Return: always prlen.
 */

int printperc(va_list *p, char b, int *c)
{
	int prlen = 0;
	
	(void)p;
	if (b == '%')
	{
		write(1, "%", 1);
		*c = (*c + 2);
		return (prlen += 1);
	}
	else
		return (prlen);
}
