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
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return -1;
	}

	for (unsigned int i = 0; i <= 63; n >>= 1, i++)
		if (index == i)
		{
			return n & 1;
		}
}
