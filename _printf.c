#include <unistd.h>
#include "main.h"
#include <stdarg.h>
/**
 * _printf - function that produces output according to a format.
 * @format: function parameter.
 * Return: always len.
 */
int _printf(const char *format, ...)
{
	int a, z;
	char c, *s;
	va_list p;

	va_start(p, format);
	for (a = 0, z = 0; format[a] != 0; a++)
	{
		if (format[a] == '%' && format[a + 1] == 'c')
		{
			c = va_arg(p, int);
			write(1, &c, 1);
			z++;
			++a;
		}
		else if (format[a] == '%' && format[a + 1] == 's')
		{
			s = va_arg(p, char *);
			write(1, s, _strlen(s));
			z += _strlen(s);
			++a;
		}
		else if (format[a] == '%' && format[a + 1] == '%')
		{
			c = '%';
			write(1, &c, 1);
			z++;
			++a;
		}
		else
		{
			write(1, &format[a], 1);
			z++;
		}
	}
	va_end(p);
	return (z);
}
