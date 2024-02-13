#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int prinum(int a)
{
	int b, prlen = 0;

	b = (a % 10) + '0';
	a = a / 10;
	if (a != 0)
	{
		prinum(a);
	}
	write(1, &b, 1);
	return (prlen += 1);
}
