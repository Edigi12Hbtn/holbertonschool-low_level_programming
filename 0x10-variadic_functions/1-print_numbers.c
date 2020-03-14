#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers.
 *
 * @separator: separator of printed numbers.
 * @n: number of elements to print.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL && n != 0)
	{
		va_list ap;
		unsigned int i;

		va_start(ap, n);
		for (i = 0; i < n - 1; i++)
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
		printf("%d\n", va_arg(ap, int));
		va_end(ap);
	}
}
