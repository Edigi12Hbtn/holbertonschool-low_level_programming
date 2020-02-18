#include "holberton.h"

/**
 * _puts - prints a string in the stdout
 *
 * @str: string to print
 *
 */

void _puts(char *str)
{
	int pos;

	pos = 0;
	while(str[pos] != '\0')
	{
		_putchar(str[pos++]);
	} 
	_putchar('\n');
}
