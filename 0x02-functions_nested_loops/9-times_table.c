#include "holberton.h"

/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int var_Buff, var_Print, i, j;

	var_Buff = 0;
	var_Print = 0;
	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			_putchar((var_Print / 10) + '0');
			_putchar((var_Print % 10)  + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
			var_Print += var_Buff;
			j++;
		}
		var_Buff++;
		var_Print = 0;
		i++;
	}
}
