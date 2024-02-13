#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdarg.h>
/**
 * _printf - function that prints different specifiers.
 * @format: function parameter.
 * Return: always variable value of prlen.
 */
int _printf(const char *format, ...)
{
	int a, b, z, prlen = 0;
	va_list p;
	int (*print[])(va_list p, char m, char n, int *y) = {&printc, &prints, &printperc, &printd};

	z = 4;
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(p, format);
	for (a = 0; format[a] != '\0';)
	{
		if (format[a] == '%')
			if (format[a + 1] == 'c' || format[a + 1] == 's' || format[a + 1] == '%' || format[a + 1] == 'd' || format[a + 1] == 'i')
			{
				for (b = 0; b < z; b++)
					prlen += print[b](p, format[a], format[a + 1], &a);
			}
			else
				++a;
		else
		{
			write(1, &format[a], 1);
			prlen += 1;
			++a;
		}
	}
	va_end(p);
	return (prlen);
}
