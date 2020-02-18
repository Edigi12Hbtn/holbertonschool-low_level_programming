#include "holberton.h"

/**
 * print_rev - print a string in reverse
 *
 * @s: string to print
 */

void print_rev(char *s)
{
	int pos;

	pos = 0;
	while (s[pos] != '\0')
		pos++;

	while (pos != 0)
	{
		_putchar(s[pos]);
		pos--;
	}
	_putchar('\n');
}
