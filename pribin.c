#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * pribin - function that prints binary numbets.
 * @d: function parameter.
 * Return: always prlen.
 */

int pribin(int d)
{
	int a, prlen = 0;

	a = (d % 2) + '0';
	d = d / 2;
	if (d != 0)
	{
		pribin(d);
	}
	write(1, &a, 1);
	return (prlen += prlen);
}
