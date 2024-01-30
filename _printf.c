#include <unistd.h>
#include "main.h"
#include <stdarg.h>
/**
 * _printf - function that produces output according to a format.
 * @format: function parameter.
 * Return: always len or -1.
 */
int _printf(const char *format, ...)
{
	int a, z;
	va_list p;

	if (format == NULL)
		return (-1);
	va_start(p, format);
	for (a = 0, z = 0; format[a] != 0; a++)
	{
		if (format[a] == '%' && format[a + 1] == 'c')
		{
			z += charpr(p);
			++a;
		}
		else if (format[a] == '%' && format[a + 1] == 's')
		{
			z += strpr(p);
			++a;
		}
		else if (format[a] == '%' && format[a + 1] == '%')
		{
			z += percpr('%');
			++a;
		}
		else
			z += formpr(format[a]);
	}
	va_end(p);
	return (z);
}
