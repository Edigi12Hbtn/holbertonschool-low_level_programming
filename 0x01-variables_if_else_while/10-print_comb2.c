#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	n = 0;
	m = 0;
	while (m <= 9)
	{
		n = 0;
		while (n <= 9)
		{
			putchar(m + 48);
			putchar(n + 48);
			if ((n != 9) || (m != 9))
			{
				putchar(',');
				putchar(' ');
			}
			n += 1;
		}
		m += 1;
	}
	putchar('\n');
	return (0);
}
