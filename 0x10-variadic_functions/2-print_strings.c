#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	if (n != 0)
	{
		va_list ap;
		char *p;
		unsigned int i;

		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			p = va_arg(ap, char*);
			if (p != NULL)
			{
				if (separator != NULL)
				{
					printf("%s", p);
					if (i != n - 1)
						printf("%s", separator);
				}
				else
					printf("%s", p);
			}
			else
			{
				if (separator != NULL)
				{
					printf("(nil)");
					if (i != n - 1)
						printf("%s", separator);
				}
				else
					printf("(nil)");
			}
		}
		va_end(ap);
	}
	printf("\n");
}
