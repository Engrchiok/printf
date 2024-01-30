#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * charpr - function that prints %c.
 * @p: function parameter.
 * Return: always variable z.
 */

int charpr(va_list p)
{
	int c, z = 0;

	c = va_arg(p, int);
	write(1, &c, 1);
	z += 1;
	return (z);
}

/**
 * strpr - function that prints %s.
 * @p: function parameter.
 * Return: always variable z.
 */

int strpr(va_list p)
{
	char *s;
	int z = 0;

	s = va_arg(p, char *);
	write(1, s, _strlen(s));
	z += _strlen(s);
	return (z);
}

/**
 * percpr - function that prints %.
 * @perc: function parameter.
 * Return: always variable z.
 */

int percpr(char perc)
{
	int z = 0;

	write(1, &perc, 1);
	z = z + 1;
	return (z);
}

/**
 * formpr - function that prints the format string.
 * Return: always z.
 */

int formpr(char format)
{
	int z = 0;

	z += write(1, &format, 1);
	return (z);
}
