#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - .
 *
 * @min: .
 * @max: .
 *
 * Return: .
 */

int *array_range(int min, int max)
{
	int *str;
	int i;

	if (min > max)
		return (NULL);

	str = malloc(sizeof(int) * (max - (min - 1)));

	for (i = min; i < max + 1; i++)
		str[i - min] = i;

	return (str);
}
