#include "main.h"

/**
 * _strcmp - Function to compare two strings
 * @s1: String 1
 * @s2: String 2
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (s1[1] - s2[i]);
}
