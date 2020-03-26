#include "holberton.h"

/**
 * flip_bits - function that returns the number of
 * bits you would need to flip to get from one number to another.
 *
 * @n: nuber one.
 * @m:number two.
 * Return: the number of bits you would need to flip
 * to get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 1;
	unsigned int num_flips = 0, i = 0;

	while (i++ <= sizeof(unsigned long int) * 8)
	{
		if ((n & mask) != (m & mask))
			num_flips += 1;
		mask <<= 1;
	}

	return (num_flips);
}
