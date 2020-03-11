#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 *
 * @name: name.
 * @f: pointer to function that print.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
