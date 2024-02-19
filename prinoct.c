#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * prinoct - function that prints octal integers.
 * @d: function parameter.
 * Return: always *prlen or 0.
 */

int prinoct(unsigned int d, int *prlen)
{
	unsigned int a;

	if (d < 0 || d == '\0')
		return (0);
	else
	{
		a = (d % 8) + '0';
		d = d / 8;
		if (d != 0)
		{
			prinoct(d, prlen);
		}
		write(1, &a, 1);
		return (*prlen += 1);
	}
}
