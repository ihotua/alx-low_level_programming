#include "main.h"
#include <stdio.h>

/**
* print_binary - prints the binary representation of a number
* @n: unsigned long int
*
* Return: no return
*/

void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n > 1)
		print_binary(n >> 1);
		_putchar('0' + (n & 1));
	}
	else
	{
		_putchar('0');
	}
}
