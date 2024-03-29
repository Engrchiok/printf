#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/** prinum - function that prints unsigned decimal integers.
 * @a: function parameter.
 * Return: always prlen or 0.
 */

int prinum(int a, int *prlen)
{
	int b;

	if (a < 0 || a == '\0')
		return (0);
	else
	{
		b = (a % 10) + '0';
		a = a / 10;
		if (a != 0)
		{
			prinum(a, prlen);
		}
		write(1, &b, 1);
		return (*prlen += 1);
	}
}
