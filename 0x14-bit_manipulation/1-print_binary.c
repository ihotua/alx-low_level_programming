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
		putchar((n & mask) ? '1' : '0');
		mask >>= 1;
	}

	putchar('\n');
}

int main()
{
	unsigned long int num = 123;
	printf("Binary representation of %lu: ", num);
	print_binary(num);
	return (0);
}
