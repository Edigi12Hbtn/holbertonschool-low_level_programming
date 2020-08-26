#include "search_algos.h"

/**
 * binary_search - binary search algorithm implementation.
 *
 * @array: ordered array of integers.
 * @size: size of array.
 * @value: value to search for.
 *
 * Return: index where value was found or -1.
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = (int) size - 1, middle = 0, i = 0;

	while (left <= right)
	{
		i = left;
		printf("Searching in array: ");
		while (i <= right)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
			else
				printf("\n");
			i++;
		}
		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}

	return (-1);
}
