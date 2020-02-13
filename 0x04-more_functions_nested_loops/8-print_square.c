#include "holberton.h"

/**
 * print_square - Entry point
 *
 * @size: - number;
 *
 */

void print_square(int size)
{
	int l, c;

	for (l = 1; l <= size; l++)
	{
		for (c = 1; c <= size; c++)
			_putchar('#');
		if (l != size)
			_putchar('\n');
	}
	_putchar('\n');
}
