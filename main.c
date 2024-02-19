#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, l[10];
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	l[6] = _printf("Length:[%d, %i]\n", len, len);
	l[7] = printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	l[8] = _printf("Unsigned:[%u]\n", ui);
	l[9] = printf("Unsigned:[%u]\n", ui);
	l[0] = _printf("Unsigned octal:[%o]\n", ui);
	l[1] = printf("Unsigned octal:[%o]\n", ui);
	l[2] = _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	l[3] = printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	l[4] = _printf("Character:[%c]\n", 'H');
	l[5] = printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");

	_printf("\noctal is %d\n \noctal is %d\n \nhexa is %d\n \nhexa is %d\n \nchar is %d\n \nchar is%d\n \ndec is %d\n \ndec is %d\n \nunsogned is %d\n \nunsigned is %d\n \n%u\n \n%u\n \n%b \n \n%u\n \n%u\n", l[0], l[1], l[2], l[3], l[4], l[5], l[6], l[7], l[8], l[9], 90, 214748, 50, INT_MAX, 4294967);
//	printf("%b\n", 98);
	return (0);
}
