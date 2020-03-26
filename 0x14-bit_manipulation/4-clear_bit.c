#include "holberton.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 *
 * @n: value of number.
 * @index: is the index, starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~1;

	if (sizeof(unsigned long int) * 8 < index)
		return (-1);

	while (index-- != 0)
		mask <<= 1;

	*n = mask & (*n);
	return (1);
}
