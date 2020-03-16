#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
#include <stdio.h>

/**
 * print_func - Typedef for unsigned int
 */
typedef struct print_func print_func;

/**
 * struct print_func - Short description
 * @c: First member
 * @f: Second member
 *
 * Description: Longer description
 */

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
