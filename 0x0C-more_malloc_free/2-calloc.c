#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 *
 * @nmemb: number of positions.
 * @size: size (in bytes) of each position.
 *
 * Return: pointer to reserved memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;
	char *add;
	unsigned int i = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);

	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);

	add = str;

	for (i = 0; i < nmemb * size; i++)
		add[i] = 0;

	return (str);
}
