#include "holberton.h"

/**
 * reverse_array - reverse the contents of an integer array
 *
 * @a: array of integers
 * @n: number of elements in array a
 *
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int i, arr[10000];

	i = 0;
	while (i < n)
	{
		arr[i] = a[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		a[i] = arr[n - 1 - i];
		i++;
	}
}
