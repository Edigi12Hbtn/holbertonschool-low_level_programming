#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of
 * unnamed parameters.
 *
 * @n: number of unnamed parameters.
 *
 * Return: sum of integer parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		va_list ap;
		int i = 0;
		unsigned int c;

		va_start(ap, n);
		for (c = 0; c < n; c++)
			i += va_arg(ap, int);
		va_end(ap);
		return (i);
	}
	return (0);
}
