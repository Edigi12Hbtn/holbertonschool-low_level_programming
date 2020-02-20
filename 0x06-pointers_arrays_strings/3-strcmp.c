#include "holberton.h"

/**
 * _strcmp - compare strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int ret, i;

	i = 0;
	ret = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		ret = (s1[i] - s2[i]);
		if (ret != 0)
			break;
		i++;
	}
	ret = s1[i] - s2[i];

	return(ret);
}
