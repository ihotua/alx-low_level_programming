#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n : unsigned long int
 *
 * Return: no return
 */

void print_binary(unsigned long int)
{
	unsigned long int i;
	
	for (i = 1UL << (sizeof(unsigned long int) * 8 - 1);
	{
		if (n & i)
			_putchar('1');
		else
			_putchar('0');
	}
}
