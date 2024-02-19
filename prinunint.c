#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * prinunint - function that prints unsigned integers.
 * @a: function parameter.
 * Return: always prlen or 0.
 */

int prinunint(unsigned int a, int *prlen)
{
	unsigned int b;

/*	if (a < 0 || a == '\0')
		return (0);
	else
	{*/
		b = (a % 10) + '0';
		a = a / 10;
		if (a != 0)
		{
			prinunint(a, prlen);
		}
		write(1, &b, 1);
		return (*prlen += 1);
//	}
}
