#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int.
 *
 * Return: no return.
 */

void print_binary(unsigned long int n)
{
	int num_bits = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << (num_bits - 1);
	
	int started = 0;

	for (int i = 0; i < num_bits; i++)
	{
		if (n & mask)
		{
			_putchar('1');
			started = 1;
		} 
		else if (started || i == num_bits - 1)
		{
			_putchar('0');
			started = 1;
		}
		mask >>= 1;
	}
}
