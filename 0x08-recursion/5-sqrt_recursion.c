#include "holberton.h"

/**
 * p - dsf
 *
 * @n: sdfsd
 * @r: ;d
 *
 * Return: Always 0 (Success)
 */

int p(int n, int r)
{
	if (n == r * r)
		return (r);
	else if (n < r * r)
		return (-1);
	else
		return (p(n, r + 1));
}

/**
 * _sqrt_recursion - dsf
 *
 * @n: sdfsd
 *
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{
		return (p(n, 1));
}
