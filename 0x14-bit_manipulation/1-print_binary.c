#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: unsigned long int n.
 *
 * Return: Always 0 (Success)
 */

void print_binary(unsigned long int n)
{
	unsigned long int m = n, length = 0, mask = 1;
	int i, aux = 0;

	if (m != 0)
	{
		while (m != 0)
		{
			m >>= 1;
			length++;
		}

		aux = length - 1;

		while (aux-- != 0)
			mask <<= 1;

		m = n;
		aux = length - 1;
		while (aux != 0)
		{
			m = mask & m;
			for (i = 0; i < aux; i++)
				m >>= 1;
			_putchar(m + '0');
			m = n;
			aux--;
			mask >>= 1;
		}
	}
	m = mask & m;
	_putchar(m + '0');
}
