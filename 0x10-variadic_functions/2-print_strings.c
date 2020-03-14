#include "variadic_funcions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print strings - prints strings, followed by a new line.
 *
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL && n != 0)
	{
		va_list ap;
		char *p;
		unsigned int i;

		va_start(ap, separator);
		for (i = 0; i < n - 1; i++)
		{
			p = va_arg(ap, char*);
			if (p != NULL)
			printf("%s%s", va_arg(ap, char*), separator)
		}
		va_end(ap);
	}
}
