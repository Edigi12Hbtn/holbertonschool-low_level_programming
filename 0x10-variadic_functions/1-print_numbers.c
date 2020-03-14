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
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (n != 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			if (separator != NULL)
				printf("%d%s", va_arg(ap, int), separator);
			else
				printf("%d", va_arg(ap, int));
		}
		printf("%d", va_arg(ap, int));
	}
	printf("\n");
	va_end(ap);
}
