#include "main.h"

/**
 * set_bit - sets the value of bit to 1
 *
 * @n: long int
 *
 * @index: unisigned int
 *
 * Return: 1 if it worked, -1 if it didn't work
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	unsigned long int mask = 1 << index;
	if ((*n & mask) == 0) 
	{
		*n =*n | mask;
		return (1);
	}

	return (0);
}
