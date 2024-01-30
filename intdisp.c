#include "main.h"
#include <unistd.h>

int intdisp(int a)
{
	int c, z;

	
	z = 0;
	if (a == 0)
	{
		return (z);
	}
	c = a % 10;
	c = c + '0';
	a = a / 10;
	intdisp(a);
	write(1, &c, 1);
	z++;
	return (z);
}
