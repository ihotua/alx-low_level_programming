#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: unisgined long int
 *
 * @index: unsigned int
 *
 * Return: 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index < sizeof(unsigned long int) * 8 || n == NULL)
	{
		*n = (*n & ~mask);
		return (1);
	}

	return (-1);
}
