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
	if ( d == 0)
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
