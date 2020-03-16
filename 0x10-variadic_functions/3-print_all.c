#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - prints a char.
 *
 * @ap: list with parameter to print.
 */


void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_integer - prints an integer.
 *
 * @ap: list with parameter to print.
 */

void print_integer(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

/**
 * print_float - prints a float.
 *
 * @ap: list with parameter to print.
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints a string.
 *
 * @ap: list with parameter to print.
 */

void print_string(va_list ap)
{
	char *str = va_arg(ap, char*);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - print 4 kind of variables.
 *
 * @format: format of incomming variables.
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *separator = "";

	print_func char_to_func[] = {{'c', print_char},
		{'i', print_integer}, {'f', print_float}, {'s', print_string}};
	va_list ap;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == 'c' || format[i] == 'i' ||
		format[i] == 'f' || format[i] == 's')
		{
			j = 0;
			while (format[i] != char_to_func[j].c)
				j++;
			printf("%s", separator);
			char_to_func[j].f(ap);
			separator = ", ";
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
