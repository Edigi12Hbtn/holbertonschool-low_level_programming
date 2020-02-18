#include "holberton.h"

/**
 * _strlen - length of string
 *
 * @s: - string you want to know the length
 *
 * Return: the length of the string
 */


int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
