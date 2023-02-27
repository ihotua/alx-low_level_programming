#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int ihotu = 0;

	while (*s != '\0')
	{
		ihotu++;
		s++;
	}
	return (ihotu);
}
