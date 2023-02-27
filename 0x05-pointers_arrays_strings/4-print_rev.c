#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int sabigurl = 0;
	int j;

	while (*s != '\0')
	{
		sabigurl++;
		s++;
	}
	s--;
	for (j = sabigurl; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
