#include "holberton.h"

/**
 * print_diagonal- Entry point
 *
 * @n: - number;
 *
 */

void print_diagonal(int n)
{
	int l, c;

	for (l = 0; l < n; l++)
	{
		for (c = 0; c < (l - 1); c++)
			_putchar(' ');
		_putchar('\');
		if (l != n)
			_putchar('\n');
	}
	_putchar('\n');
}
