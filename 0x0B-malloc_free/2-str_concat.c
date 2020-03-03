#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: pointer to s1 concat s2.
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int size1 = 0, size2 = 0, i = 0;

	if (s1 == NULL)
	{
		size1 = 0;
	}
	else
	{
		while (s1[size1] != '\0')
			size1++;
	}

	if (s2 == NULL)
	{
		size2 = 0;
	}
	else
	{
		while (s2[size2] != '\0')
			size2++;
	}

	str = malloc(((size1 + size2) * sizeof(char)) + 1);

	if (str == NULL)
		return (NULL);

	while (i < size1 + size2)
	{
		if (i < size1)
			str[i] = s1[i];
		else
			str[i] = s2[i - size1];
		i++;
	}
	str[i] = '\0';

	return (str);
}
