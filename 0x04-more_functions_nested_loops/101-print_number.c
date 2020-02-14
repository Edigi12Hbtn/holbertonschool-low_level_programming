#include "holberton.h"

/**
 * print_number - Entry point
 *
 * @n: - Always
 */

void print_number(int n)
{
	int Pd, d, i, m;

	Pd = 0;
	if (n == 0)
	{
		Pd = 10;
	}
	else if (n > 0)
	{
		for (m = 1; m <= 100000; m *= 10)
		{
			if ((n >= m) && n < (m * 10))
				Pd = m * 10;
		}
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
		for (m = 1; m <= 100000; m *= 10)
		{
			if ((n >= m) && (n < (m * 10)))
				Pd = m * 10;
		}
	}

	for (i = Pd; i >= 10; i /= 10)
	{
		d = n % i;
		d = d / (i / 10);
		_putchar(d + '0');
	}
}
