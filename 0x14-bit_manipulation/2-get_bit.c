#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 0 || index >= (sizeof(unsigned long int) * 8))
	{
		return -1;
	}

	unsigned long int mask = 1UL << index;
	return (n & mask) ? 1 : 0;
}
