#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * priX - print hexagonal integers in lower case.
 * @d: function parameter.
 * Return: always prlen or 0.
 */

int priX(unsigned int d, int *prlen)
{
	unsigned int X, y, z;

	if (d < 0 || d == '\0')
		return (0);
	else
	{
		X = (d % 16);
		if (X <= 9 && X >= 0)
			X += '0';
		else
		{
			for (y = 10, z = 0; y < 16; z++, y++)
			{
				if (y == X)
					X = 'A' + z;
			}
		}
		d = d / 16;
		if (d != 0)
			priX(d, prlen);
		write(1, &X, 1);
		return (*prlen += 1);
	}
}
