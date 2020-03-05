#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: string 1.
 * @s2: string 2.
 * @n: n bytes of s2 to concat.
 *
 * Return: pointer to concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int s1_len = 0, s2_len = 0,  i = 0;

	if (s1 == NULL)
		s1_len = 0;
	else
	{
		while (s1[s1_len] != '\0')
			s1_len++;
	}

	if (s2 == NULL)
		s2_len = 0;
	else
	{
		while (s2[s2_len] != '\0')
			s2_len++;
	}
	if (s2_len < n)
		n = s2_len;

	str = malloc(sizeof(*str) * (s1_len + n + 1));
	/*length of s1 + n bytes of s2 + 1 for null character*/

	if (str == NULL)
		return (NULL);

	for (i = 0; i < s1_len + n + 1; i++)
	{
		if (i < s1_len)
			str[i] = s1[i];
		else
			str[i] = s2[i - s1_len];
	}
	str[i] = '\0';

	return (str);
}
