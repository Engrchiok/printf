#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * prix - print hexagonal integers in lower case.
 * @d: function parameter.
 * Return: always 0 or *prlen.
 */

int prix(unsigned int d, int *prlen)
{
	unsigned int x, y, z;

	if (d < 0 || d == '\0')
		return (0);
	else
	{
		x = (d % 16);
		if (x <= 9 && x >= 0)
			x += '0';
		else
		{
			for (y = 10, z = 0; y < 16; z++, y++)
			{
				if (y == x)
					x = 'a' + z;
			}
		}
		d = d / 16;
		if (d != 0)
			prix(d, prlen);
		write(1, &x, 1);
		return (*prlen += 1);
	}
}
