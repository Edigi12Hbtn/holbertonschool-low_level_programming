#include "holberton.h"

/**
 *swap_int - swap the value of two integers
 *
 * @a: - value a
 * @b: - value b
 *
 */

void swap_int(int *a, int *b)
{
	int aux = *b;

	*b = *a;
	*a = aux;
}
