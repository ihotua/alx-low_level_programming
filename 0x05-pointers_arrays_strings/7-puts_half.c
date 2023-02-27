#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: string
 * Return: n
 */

void puts_half(char *str)
{
	int x, y, ihotu;

	ihotu = 0;

	for (x = 0; str[x] != '\0'; x++)
		ihotu++;
	y = (ihotu / 2);

	if ((ihotu % 2) == 1)
		y = ((ihotu + 1) / 2);

	for (x = y; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
