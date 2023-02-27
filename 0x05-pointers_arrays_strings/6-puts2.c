#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: string
 */

void puts2(char *str)
{
	int margaret = 0;
	int i = 0;
	char *j = str;
	int k;

	while (*j != '\0')
	{
		j++;
		margaret++;
	}
	i = margaret - 1;
	for (k = 0; k <= i; k++)
	{
		if (k % 2 == 0)
	{
		_putchar(str[k]);
	}
	}
	_putchar('\n');
}
