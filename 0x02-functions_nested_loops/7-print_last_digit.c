#include "main.h"

/**
 * print_last_digit - Prints the last digit of the number
 * @i: parameter that prints the last digit
 * Return: f
 */

int print_last_digit(int i)
{
	int f;

	f = i % 10;
	if (i < 0)
		f = -f;
	_putchar(f + '0');
	return (f);
}
