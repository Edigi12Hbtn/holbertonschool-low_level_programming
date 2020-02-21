#include "holberton.h"

/**
  * print_number - print integer as string
  *
  * @n: integer to print
  *
  */

void print_number(int n)
{
	unsigned int m = 0, k = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	m = n;
	while (m != 0)
	{
		k = 1;
		while (m / 10)
		{
			m /= 10;
			k *= 10;
		}
		_putchar(m + 48);
		m = n;
		m %= k;
	}
	if (n == 0)
		_putchar('0');
}
