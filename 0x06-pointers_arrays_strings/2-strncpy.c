#include "holberton.h"

/**
 * _strncpy - copy string
 *
 * @dest: destine
 * @src: source
 * @n: number of char
 *
 * Return: Always 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (dest[i] != '\n' && src[i] != '\n' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
