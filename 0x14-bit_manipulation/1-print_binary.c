#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = 1 << (sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}

int main()
{
	print_binary(0);
	_putchar('\n');
	print_binary(1);
	_putchar('\n');
	return (0);
}
