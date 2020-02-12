#include "holberton.h"
#include <stdio.h>

/**
 *  print_to_98 - Entry point
 *
 * @n: - lsdkf
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int k;

	if (n < 98)
	{
		for (k = n; k < 98; k++)
		{
			printf("%d, ", k);
		}
	}
	else if (n > 98)
	{
		for (k = n; k > 98; k--)
		{
			printf("%d, ", k);
		}

	}
	printf("98");
	printf("\n");
}
