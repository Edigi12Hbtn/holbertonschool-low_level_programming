#include "holberton.h"

/**
 * _memcpy - copy n data from src to dest
 *
 * @dest: destine
 * @src: souurce of data
 * @n: number of bytes to copy
 *
 * Return: returns the direction of destine
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
