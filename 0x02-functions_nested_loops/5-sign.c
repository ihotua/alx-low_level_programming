#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: parameter to be printed
 * Return: 1 & + if n> 0 else if n=0 return 0 otherwise return -1 and print -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}
