#include <unistd.h>
#include "main.h"
#include <stdarg.h>

/**
 * intpr - function that prints integers.
 * @p: function parameter.
 * Return: always z.
 */

int intpr(va_list p)
{
	int d, y, z = 0;

	d = va_arg(p, int);
	if (d == 0)
	{
		y = d + '0';
		write(1, &y, 1);
		z += 1;
		return (z);
	}
	else if (d < 0)
	{
		y = '-';
		write(1, &y, 1);
		z += 1;
		d = d * (-1);
		z += intdisp(d);
		return (z);
	}
	else
	{
		z += intdisp(d);
		return (z);
	}
}

/**
 * intdisp - function that prints %d and %i.
 * @a: function parameter.
 * Return: always variable z.
 */

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
