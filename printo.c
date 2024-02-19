#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * printo - function that prints octal integer specify.
 * @p: function parameter.
 * @b: function parameter.
 * @c: function parameter.
 * Return: always returns prlen.
 */

int printo(va_list *p, char b, int *c)
{
	unsigned int d;
	int prlen = 0;

	if (b == 'o')
	{
		d = va_arg(*p, unsigned int);
		if (d < 0 || d == '\0')
			return (prlen);
		else
		{
			*c += 2;
			return (prinoct(d, &prlen));
		}
	}
	else
		return (prlen);
}
