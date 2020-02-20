#include "holberton.h"

/**
 * leet - Entry point
 * @s: string
 * Return: Always 0 (Success)
 */

char *leet(char *s)
{
	char arr_1[] = "aeotl";
	char arr_2[] = "43071";
	int j = 0, i = 0;

	while (s[i] != '\0')
	{
		for (j = 0 ; j < 5; j++)
		{
			if ((s[i] == arr_1[j]) || (s[i] == (arr_1[j] - 32)))
				s[i] = arr_2[j];
		}
		i++;
	}
	return (s);
}
