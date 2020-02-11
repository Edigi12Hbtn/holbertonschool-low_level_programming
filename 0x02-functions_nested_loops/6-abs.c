#include "holberton.h"

/**
 * _abs - Entry point
 *
 * @n: - number
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	int value = 0;

	if (n > 0)
	{
		value = n;
	}
	else if (n == 0)
	{
		value = 0;
	}
	else
	{
		value = -n;
	}
	return (value);
}
