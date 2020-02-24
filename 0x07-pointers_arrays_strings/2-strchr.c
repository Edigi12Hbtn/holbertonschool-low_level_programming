#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in string s.
 *
 * @s: find character in this string.
 * @c: character to look for.
 *
 * Return: Returns a pointer to the first occurrence of
 * the character c in the string s, or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int i;
	char *ret;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			ret = (s + i);
			return (ret);
	}
	return (NULL);
}
