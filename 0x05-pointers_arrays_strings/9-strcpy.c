#include "holberton.h"

/**
 * _strcpy - copies the string pointed by src to the buffer pointed for dest
 *
 * @dest: Buffer where will be stored the value in *src
 * @src: Source of data for buffer
 *
 * Return: returns dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		*(dest + index) = src[index];
		index++;
	}
	*(dest + index) = '\0';
	return (dest);
}
