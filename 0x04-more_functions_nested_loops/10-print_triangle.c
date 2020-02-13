#include "holberton.h"

/**
 * print_triangle - Entry point
 *
 * @size: - number;
 *
 */

void print_triangle(int size)
{
	int l, c, n;

	n = size;
	for (l = 1; l <= n; l++)
	{
		for (c = 1; c <= (n - l); c++)
		{
			_putchar(' ');
		}
		for (c = n - l + 1; c <= n; c++)
		{
			_putchar('#');
		}
		if (l != n)
			_putchar('\n');
	}
	_putchar('\n');
}
