#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: binari number.
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, idx = 0;

	if (b == NULL)
		return (0);

	while (b[idx] != '\0')
	{
		num <<= 1;

		if (b[idx] == '0' || b[idx] == '1')
			num += b[idx] - 48;
		else
			return (0);

		idx++;
	}

	return (num);
}
