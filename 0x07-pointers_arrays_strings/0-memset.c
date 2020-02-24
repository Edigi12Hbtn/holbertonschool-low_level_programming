#include "holberton.h"

/**
 * _memset - fills n memory spaces with the constant char b
 *
 * @s: adress of memory
 * @b: constant char
 * @n: numbers of fields to fill
 *
 * Return: return the adress of the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
