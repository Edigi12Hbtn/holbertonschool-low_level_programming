#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - realloc function.
 *
 * @ptr: pointer to old memory block.
 * @old_size: old reserved memory size.
 * @new_size: new reserved memory size.
 *
 * Return: returns new pointer, null or.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_2;
	char *pointer;
	char *pointer_2;
	unsigned int min, i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size == new_size)
		return (ptr);

	ptr_2 = malloc(new_size);
	if (ptr_2 == NULL)
		return (NULL);

	pointer = ptr;
	pointer_2 = ptr_2;

	if (ptr != NULL)
	{
		if (old_size < new_size)
			min = old_size;
		else
			min = new_size;

		for (i = 0; i < min; i++)
			pointer_2[i] = pointer[i];
		free(ptr);
	}
	return (ptr_2);
}
