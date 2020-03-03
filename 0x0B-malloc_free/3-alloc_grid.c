#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - pointer to array of size width * height.
 *
 * @width:.
 * @height:.
 *
 * Return: returns a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **str;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	str = malloc(height * sizeof(str));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		str[i] = malloc(width * sizeof(int));
		if (str[i] == NULL)
		{
			free(str);
			return (NULL);
		}
	}

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			str[i][j] = 0;
			j++;
		}
		i++;
	}

	return (str);
}
