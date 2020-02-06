#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		putchar(c);
		c += 1;
	}
	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c += 1;
	}
	putchar('\n');
	return (0);
}
