#include "search_algos.h"

/**
 * binarySearch2 - function that searches a
 * value inside an array.
 *
 * @arr: array of integers.
 * @l: left bound.
 * @r: right bound.
 * @x: value to look for in array.
 *
 * Return: first index were x was found.
 */

int binarySearch2(int arr[], int l, int r, int x)
{
	int i = l, mid = l;

	if (i <= r)
		printf("Searching in array: ");
	while (i <= r)
	{
		printf("%d", arr[i]);
		if (i != r)
			printf(", ");
		else
			printf("\n");
		i++;
	}

	if (r >= l)
	{
		mid = l + (r - l) / 2;
		if (arr[mid] == x)
		{
			if (mid > l && arr[mid - 1] == x)
				return (binarySearch2(arr, l, mid, x));
			return (mid);
		}

		if (arr[mid] > x)
			return (binarySearch2(arr, l, mid - 1, x));
		return (binarySearch2(arr, mid + 1, r, x));
	}

	return (-1);
}


/**
 * advanced_binary - function that searches for
 * a value in a sorted array of integers.
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value is the value to search for.
 *
 * Return: first index where value apears.
 */


int advanced_binary(int *array, size_t size, int value)
{
	int left = 0, right = (int) size - 1;

	if (array == NULL || size == 0)
		return (-1);

	return (binarySearch2(array, left, right, value));
}
