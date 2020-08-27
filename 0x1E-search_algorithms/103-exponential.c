#include "search_algos.h"

/**
 * binary_search1 - binary search algorithm implementation.
 *
 * @array: ordered array of integers.
 * @value: value to search for.
 * @left: left bound.
 * @right: right bound.
 *
 * Return: index where value was found or -1.
 */

int binary_search1(int *array, int value, size_t left, size_t right)
{
	size_t middle = 0, i = 0;

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
		{
			if (middle == 0)
				right = 0;
			else
				right = middle - 1;
		}
		else
			return (middle);
	}

	return (-1);
}

/**
 * exponential_search - function that searches for a value in a
 * sorted array of integers using the Exponential search algorithm.
 *
 * @array: a pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value is the value to search for.
 *
 * Return: returns the first index where value is located.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1,  min = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n",
			(int) bound, array[bound]);

		bound *= 2;
	}

	if (bound > size)
		min = size - 1;
	else if (bound < size)
		min = bound;
	else
		min = size - 1;

	printf("Value found between indexes [%d] and [%d]\n",
		(int) bound / 2, (int) min);


	return (binary_search1(array, value, bound / 2, min));
}
