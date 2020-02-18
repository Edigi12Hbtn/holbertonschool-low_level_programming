#include "holberton.h"

/**
 * puts_half - prints the second half of the string
 *
 * @str: string
 */

void puts_half(char *str)
{
	int pos_max, i, from;

	pos_max = 0;
	i = 0;
	from = 0;
	while (str[pos_max] != '\0')
		pos_max++;
	pos_max--;

	if (pos_max % 2 == 0)
		from = pos_max / 2 + 1;
	else
		from = (pos_max + 1) / 2;

	for (i = from; i <= pos_max; i++)
		_putchar(str[i]);
	_putchar('\n');
}
