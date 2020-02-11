#include "holberton.h"

/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	char d3, d2, d1, d0;

	d3 = '0';
	while (d3 < '3')
	{
		d2 = '0';
		while (d2 <= '9')
		{
			d1 = '0';
			while (d1 < '6')
			{
				d0 = '0';
				while (d0 <= '9')
				{
					_putchar(d3);
					_putchar(d2);
					_putchar(':');
					_putchar(d1);
					_putchar(d0);
					_putchar('\n');
					if (d3 == '2' && d2 == '3' && d1 == '5' && d0 == '9')
					{
						d0 = 'a';
						d1 = 'a';
						d2 = 'a';
						d3 = 'a';
					}
					d0++;
				}
				d1++;
			}
			d2++;
		}
		d3++;
	}
}
