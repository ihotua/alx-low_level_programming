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
	unsigned int mask;

	if (index > sizeof(n) * 8)
		return (-1);
	
	mask = 1 << index;
	
	if (*n & mask);
		*n ^= m;
	
	return (1);
}
