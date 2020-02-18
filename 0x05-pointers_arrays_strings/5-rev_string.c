#include "holberton.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int pos, pos_max;
	char arr[30];

	pos = 0;
	pos_max = 0;
	while (s[pos] != '\0')
	{
		arr[pos] = s[pos];
		pos++;
	}

	pos--;
	pos_max = pos;
	while (pos >= 0)
	{
		arr[pos_max - pos] = s[pos];
		pos--;
	}
	arr[pos_max + 1] = '\n';
	while (pos <= pos_max)
	{
		s[pos] = arr[pos];
		pos++;
	}
}
