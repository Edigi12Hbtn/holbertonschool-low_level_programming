#include "holberton.h"

/**
 * print_last_digit - Entry point
 *
 * @n: - number
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n;
	if (n < 0)
		last_digit *= -1;
	last_digit %= 10;
	_putchar(last_digit + '0');

	return (last_digit);
}
