#include "holberton.h"

/**
 * _print_rev_recursion - prints s in reverse.
 *
 * @s: string.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
		s--;
		_putchar(*s);
	}
	else
		s--;
}
