#include "search_algos.h"


int binarySearch(int arr[], int l, int r, int x) 
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

	if (r >= l) { 
		mid = l + (r - l) / 2;

	        if (arr[mid] == x) 
		{
			if (mid > l && arr[mid - 1] == x)
				return binarySearch(arr, l, mid, x);
			else
	       	    		return mid;
		}

		if (arr[mid] > x) 
			return binarySearch(arr, l, mid - 1, x); 
		else
			return binarySearch(arr, mid + 1, r, x); 
	} 

	return (-1); 
}


/**
 * advanced_binary -
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

	return (binarySearch(array, left, right, value)); 

}
