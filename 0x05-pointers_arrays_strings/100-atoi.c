#include "holberton.h"

/**
  * _atoi - atoi function
  *
  * @s: string
  */

int _atoi(char *s)
{
	int init, num, mult, look_for_sign, j, i;

	init = 0;
	look_for_sign = 0;
	while (s[init] < '0' || s[init] > '9')
		init++;
	while (s[init] >= '0' && s[init] <= '9')
		init++;
	init--;

	for (i = init; i >= 0; i--)
	{
		if (s[i] >= '0' && s[i] <= '9' && look_for_sign == '0')
		{
			for (j = 0; j < (init - i); j++)
				mult *= 10;
			num += (s[i] - '0') * mult;
		}
		else if (s[i] == '-')
		{
			num *= -1;
			look_for_sign = 1;
		}
		else
			look_for_sign = 1;
	}
	return (0);
}
