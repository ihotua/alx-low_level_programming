#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @n: unsigned long int
*
* Return: no return
*/

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL; 

	for (int i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		_putchar((n & mask) ? '1' : '0');
		mask >>= 1;
	}
}
