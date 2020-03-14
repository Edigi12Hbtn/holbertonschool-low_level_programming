#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>

struct print_func
{
	char c;
	void (*f)(va_list ap);
};

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /*VARIADIC_H*/
