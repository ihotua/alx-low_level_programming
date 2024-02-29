#include "main.h"

/**
 * print_binary - Prints binary
 *
 * @n: Unsigned int
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int num_bits = sizeof(unsigned long int) * 8;
	int started = 0;

	for (int i = num_bits - 1; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;
		if (n & mask)
		{
			_putchar('1');
			started = 1;
		}
		else if (started || i == 0)
		{
			_putchar('0');
			started = 1;
		}
	}
}
