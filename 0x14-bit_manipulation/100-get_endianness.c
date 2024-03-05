#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 1 if little endian, 0 if big endian
 */

int get_endianness(void)
{
	unsigned alex = 1;
	char *cat = (char *)&alex;
	return (*cat == 1);
}
