#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: string to be converted
 * Return: int
 */

int _atoi(char *s)
{
	int a, c, k, ihotu, z, margaret;

	a = 0;
	c = 0;
	k = 0;
	ihotu = 0;
	z = 0;
	margaret = 0;

	while (s[ihotu] != '\0')
		ihotu++;

	while (a < ihotu && z == 0)
	{
		if (s[a] == '-')
			++c;
		if (s[a] >= '0' && s[a] <= '9')
		{
			margaret = s[a] - '0';
			if (c % 2)
				margaret = -margaret;
			k = k * 10 + margaret;
			z = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			z = 0;
		}
		a++;
	}

	if (z == 0)
		return (0);

	return (k);
}
