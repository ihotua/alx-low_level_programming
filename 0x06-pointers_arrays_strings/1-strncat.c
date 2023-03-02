#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p)
	{
		p++;
	}

	while (*src && n-- > 0)
	{
		*p++ = *src++;
	}
	*p = '\0';

	return (dest);

}

