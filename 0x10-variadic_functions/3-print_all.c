#include "variadic_functions.h"
#include <stdio.h>

void print_char(va_list ap)
{
	printf("%c, ", va_arg(ap, int));
}

void print_integer(va_list ap)
{
	printf("%i, ", va_arg(ap, int));
}

void print_float(va_list ap)
{
	printf("%f, ", va_arg(ap, double));
}

void print_string(va_list ap)
{
	char *str = va_arg(ap, char*);

	if (str != NULL)
		printf("%s, ", str);
	else
		printf("(nil), ");
}

/**
 * print_all - print 4 kind of variables.
 *
 * @format: format of incomming variables.
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	struct print_func char_to_func[] ={{'c', print_char},
		{'i', print_integer},{'f', print_float},{'s', print_string}};
	va_list ap;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
		{
			j = 0;
			while (format[i] != char_to_func[j].c)
			{
				j++;
			}
			char_to_func[j].f(ap);
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
