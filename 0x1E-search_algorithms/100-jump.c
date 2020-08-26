#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted
 * array of integers using the Jump search algorithm.
 *
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, end = sqrt(size), i = 0;

	while(end < size && array[end] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int) start, array[start]);
		start = end;
		end += sqrt(size);
	}
	printf("Value checked array[%d] = [%d]\n", (int) start, array[start]);
	printf("Value found between indexes [%d] and [%d]\n", (int) start, (int) end);

	for(i = start; i <= end && i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int) i, array[i]);
		if(array[i] == value)
			return (i);
	}
   	return (-1);
}
