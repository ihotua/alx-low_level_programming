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
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, mask;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		mask = n & divisor;
		if (mask != 0)
			_putchar('1');
		else
			_putchar('0');
		divisor >>= 1;
	}
}

int main()
{
	unsigned long int num = 1;
	print_binary(num);
	printf("\n");
	return (0);
}
