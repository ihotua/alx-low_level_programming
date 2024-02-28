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

	while (mask > 0)
	{
		_putchar((n & mask) ? '1' : '0');
		mask >>= 1;
	}
}

int main()
{
	print_binary(0);
	putchar('\n');
	print_binary(1);
	putchar('\n');
	return (0);
}
