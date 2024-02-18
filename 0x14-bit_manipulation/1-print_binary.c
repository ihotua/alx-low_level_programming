#include "main.h"
#include <stdio.h>

/**
 * _pow - func calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int result = 1;
	for (; power > 0; power--)
	{
		result *= base;
	}
	return (result);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int divisor;

	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0) 
	{
		if (n & divisor)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
