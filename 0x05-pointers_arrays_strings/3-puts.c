#include "main.h"

/**
 * _puts - Prints a string folloed by a new line to stdout
 * @str: the sring to be printed
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
