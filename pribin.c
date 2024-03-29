#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * pribin - function that prints binary numbets.
 * @d: function parameter.
 * Return: always 0 or *prlen.
 */

int pribin(int d, int *prlen)
{
	int a;

	if (d < 0 || d == '\0')
		return (0);
	else
	{
		a = (d % 2) + '0';
		d = d / 2;
		if (d != 0)
		{
			pribin(d, prlen);
		}
		write(1, &a, 1);
		return (*prlen += 1);
	}
}
