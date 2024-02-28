#include "main.h"

/**
 * _pow - func calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int a;

	num = 1;
	for (a = 1; a <= power; a++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int
 *
 * Return: no return
 */

void print_binary(unsigned long int n)
{
	unsigned long int divisor;

	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		if (n & divisor)
			_putchar('1');
		else
			_putchar('0');
		divisor >>= 1;
	}
}
