#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: function to be checked
 * Return: 1 if c is an alphabet otherwise return 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
