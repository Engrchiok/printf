#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * _strlen - function that computes the length of a string.
 * @s: function parameter.
 * Return: always 0 or variable value of a.
 */

int _strlen(char *s)
{
	int a;

	if (s == NULL)
		return (0);
	else
	{
		for (a = 0; s[a] != '\0'; a++)
		{
		}
		return (a);
	}
}
