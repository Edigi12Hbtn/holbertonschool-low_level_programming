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
	/*	printf("cero\n");*/
	}
	else if (n > 0)
	{
		for (m = 1; m <= 100000; m *= 10)
		{
			if ((n >= m) && n < (m * 10))
				Pd = m * 10;
		}
	/*	printf("positivo\n");*/
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	/*	printf("valor de n neg: %d\n", n);*/
		for (m = 1; m <= 100000; m *= 10)
		{
			if ((n >= m) && (n < (m * 10)))
				Pd = m * 10;
		}
	}

	for (i = Pd; i >= 10; i /= 10)
	{
	/*	printf("loop final, n es: %d\n", n);*/
	/*	printf("%d hi\n", i);*/
		d = n % i;
	/*	printf("%d nmodi\n", d);*/
		d = d / (i / 10);
	/*	printf("%d ndivi\n", d);*/
		_putchar(d + '0');
	}
}
