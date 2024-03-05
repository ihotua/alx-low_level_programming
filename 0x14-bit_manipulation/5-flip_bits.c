#include "main.h"

/**
 * flip_bits - Number of bits needed to flip to get from one number to another
 *
 * @n: long int
 *
 * @m: unsigned int
 *
 * Return: 1 on success, -1 on failure
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int sabi = n ^ m;

	while (sabi != 0)
	{
		count += (sabi & 1);
		sabi >>= 1;
	}

	return (count);

}
