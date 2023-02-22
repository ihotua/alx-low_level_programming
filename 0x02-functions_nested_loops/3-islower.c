#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: parameter to be checked
 * Return: 1 if lowercase or 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
