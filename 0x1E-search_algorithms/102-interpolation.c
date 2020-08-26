#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a
 * sorted array of integers using the Interpolation search algorithm.
 *
 * @array: pointer to the first element of the array to search in.
 * @size: size is the number of elements in array.
 * @value: value is the value to search for.
 *
 * Return: returns the first index where value is located or -1 if it fails.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);

	while ((array[high] != array[low]) &&
		(value >= array[low]) && (value <= array[high]))
	{
		mid = low +
			(((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));

		printf("Value checked array[%d] = [%d]\n",
			(int) mid, array[mid]);

		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}

	printf("Value checked array[%d] = [%d]\n",
		(int) low, array[low]);
	if (value == array[low])
		return (low);
	else
		return (-1);
}
