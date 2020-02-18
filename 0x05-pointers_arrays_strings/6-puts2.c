#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: - string to print
 */

void puts2(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((index % 2) == 0)
			_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
