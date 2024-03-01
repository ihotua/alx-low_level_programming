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
	if (index > sizeof(*n) * 8)
	{
		*n = (*n & ~(1 << index));
		return (1);
	}

	return (-1);
}
