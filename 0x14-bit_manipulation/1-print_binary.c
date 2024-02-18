#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints a number in binary rotation
 * @n: number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask > 0)
	{
		_putchar((n & mask) ? '1' : '0');
		mask >>= 1;
	}

	_putchar('\n');
}
