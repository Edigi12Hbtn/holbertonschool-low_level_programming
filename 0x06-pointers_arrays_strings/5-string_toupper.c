#include "holberton.h"

/**
 * string_toupper - change lowercase to uppercase
 *
 * Return: return string with uppercase
 */

char *string_toupper(char *arr)
{
	int i;

	while(arr[i] != '\0')
	{
		if(arr[i] >= 'a' && arr[i] <= 'z')
			arr[i] -= 32;
		i++;
	}

	return(arr);
}
