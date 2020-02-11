#include "holberton.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char letter;
	int times = 0;

	while (times < 10)
	{
		letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter++);
		}
		_putchar('\n');
		times++;
	}
}
