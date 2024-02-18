#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binary number or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int k = 1;
	int c = 0;

	if (b == NULL)
	return (0);

	while (b[c] != '\0')
		c++;
	c--;

	for (; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
		return (0);
		if (b[c] == '1')
		{
			i += k;
		}
		k *= 2;
	}
	return (i);
}
