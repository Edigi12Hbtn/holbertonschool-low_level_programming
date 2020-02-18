#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print the first n integers of a array
 *
 * @a: array
 * @n: number of integers to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
			printf(", ");
		else
			putchar('\n');
	}
}
