#include "holberton.h"

/**
 * print_line - Entry point
 *
 * @n: - number;
 *
 */

void print_line(int n)
{
	int l;

	for (l = 0; l < n, l++)
		_putchar('_');
	_putchar('\n');
}
