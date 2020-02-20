#include "holberton.h"

/**
 * _strcat - concat two strings
 *
 * @dest: string 1
 * @src: to concat
 *
 * Return: returns concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int pos_max_dest, pos_max_src, i;

	pos_max_dest = 0;
	pos_max_src = 0;

	while (dest[pos_max_dest] != '\0')
		pos_max_dest++;
	pos_max_dest--;

	while (dest[pos_max_src] != '\0')
		pos_max_src++;
	pos_max_src--;

	for (i = pos_max_dest + 1; i <= (pos_max_dest + 1 + pos_max_src + 1); i++)
		dest[i] = src[i - (pos_max_dest + 1)];
	return (dest);
}
