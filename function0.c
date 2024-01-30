#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * charpr - function that prints %c.
 * strpr - function that prints %s.
 * percpr - function that prints %.
 * intdisp - function that prints %d and %i.
 * @p: function parameter.
 * @perc: function parameter.
 * @a: function parameter.
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

int strpr(va_list p)
{
	char *s;
	int z = 0;

	s = va_arg(p, char *);
	write(1, s, _strlen(s));
	z += _strlen(s);
	return (z);
}

int percpr(char perc)
{
	int z = 0;

	write(1, &perc, 1);
	z = z + 1;
	return (z);
}

int intdisp(int a)
{
	int c, z;

	z = 0;
	if (a == 0)
	{
		return (z);
	}
	c = a % 10;
	c = c + '0';
	a = a / 10;
	intdisp(a);
	write(1, &c, 1);
	z++;
	return (z);
}
