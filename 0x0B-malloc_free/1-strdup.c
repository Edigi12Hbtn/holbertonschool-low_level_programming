#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory, which contains
 * a copy of the string given as a parameter.
 *
 * @str: string.
 *
 * Return: direction to copy.
 */

char *_strdup(char *str)
{
	char *strcpy;
	int size = 0, i = 0;

	while (str[size] != '\0')
		size++;

	strcpy = malloc((size * sizeof(char)) + 1);
	if (str == NULL || strcpy == NULL)
		return (NULL);
	while (i < size)
	{
		strcpy[i] = str[i];
		i++;
	}
	strcpy[i] = str[i];
	/*free(strcpy);*/
	return (strcpy);
}
