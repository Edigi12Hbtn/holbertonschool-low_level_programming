#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the
 * sum of the two diagonals of a square matrix of integers.
 *
 * @a: square matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int row, col, sum_1 = 0, sum_2 = 0;

	for (row = 0; row < size; row++)
	{
		for (col = row * size; col < (row * size + size); col++)
		{
			if (col - (row * size) == row)
			{
				sum_1 += a[col];
			}
			if (col - (row * size) == (size - row - 1))
			{
				sum_2 += a[col];
			}
		}
	}
	printf("%d, %d\n", sum_1, sum_2);
}
