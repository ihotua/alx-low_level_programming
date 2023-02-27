#include "main.h"

/**
 * print-array - Prints n elements of an array of integers
 * @a: array name
 * @n: number of elements of the array
 * Return: a and n
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d", a[1]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
