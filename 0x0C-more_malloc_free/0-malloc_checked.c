#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 *
 * @b: number of bytes to allocate.
 *
 * Return: allocation adress.
 */

void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (str);
}
