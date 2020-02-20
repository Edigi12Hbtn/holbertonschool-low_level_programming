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
	int len_s1, len_s2;

	len_s1 = 0;
	len_s2 = 0;

	while (s1[len_s1] != '\0')
		len_s1++;

	while (s2[len_s2] != '\0')
		len_s2++;

	if (len_s1 - len_s2 > 0)
		return (15);
	if (len_s1 - len_s2 < 0)
		return (-15);
	else
		return (0);
}
