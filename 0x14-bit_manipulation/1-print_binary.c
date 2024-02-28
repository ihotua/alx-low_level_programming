#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int.
 *
 * Return: no return.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	while (mask > 0)
	{
		if ((n & mask) || flag)
		{
			_putchar((n & mask) ? '1' : '0');
			flag = 1:
		}
		mask >>= 1;
	}

	if (!flag)
		_putchar('0');
}
