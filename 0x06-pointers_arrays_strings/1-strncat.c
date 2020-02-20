#include "holberton.h"

/**
 * _strncat - concat two strings
 *
 * @dest: destine
 * @src: source
 * @n: characters to take
 *
 * Return: returns the pointer that points to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int pos_max_dest, i;

	pos_max_dest = 0;

	while (dest[pos_max_dest] != '\0')
		pos_max_dest++;
	pos_max_dest--;

	for (i = pos_max_dest + 1; i <= (pos_max_dest + n); i++)
		dest[i] = src[i - (pos_max_dest + 1)];
	dest[i] = '\0';

	return (dest);
}
