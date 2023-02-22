#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *@x: parameter to be computed
 * Return: Always x
 */

int _abs(int x)
{
	if (x < 0)
		x = -(x);
	else if (x >= 0)
		x = x;
	return (x);
}
