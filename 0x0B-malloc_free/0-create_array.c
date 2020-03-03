#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - create array of chars
 *
 * @size: size of array
 * @c: char for array
 *
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	/*str[i] = '\0';*/
	/*free(str);*/
	return (str);
}
