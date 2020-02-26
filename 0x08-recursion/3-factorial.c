#include "holberton.h"

/**
 * factorial - computes the factorial of n
 *
 * @n: variable
 *
 * Return: returns n!
 */

int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	else if (n == 0)
		return (1);
	else
		return (-1);
}
