#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index..
 *
 * @n: integer.
 * @index: is the index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m = n, mask = 1;
	unsigned int i, aux = 0, digits = 1;

	while ((m >> 1) != 0)
	{
		m >>= 1;
		digits++;
	}

	if (digits - 1 < index)
		return (-1);

	aux = index;

	while (aux-- != 0)
		mask <<= 1;

	m = n;
	aux = index;
	m = mask & m;
	for (i = 0; i < aux; i++)
		m >>= 1;
	return (m);
}
