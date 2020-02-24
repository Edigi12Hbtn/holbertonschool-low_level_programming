#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring.
 *
 * @haystack: string where look for.
 * @needle: string to look for.
 *
 * Return: Returns a pointer to the beginning of
 * the located substring, or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == haystack[i])
		{
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (needle[j] != haystack[i + j])
					break;
			}
			if (needle[j] == '\0')
				return (&haystack[i]);
		}
	}
	return (NULL);
}
