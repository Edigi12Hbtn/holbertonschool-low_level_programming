#include "holberton.h"

/**
 * _pow_recursion - computes x^y.
 *
 * @x: variable
 * @y: powder
 *
 * Return: Always 0 (Success)
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (-1);
}
