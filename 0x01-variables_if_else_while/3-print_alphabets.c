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

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c += 1;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c += 1;
	}
	putchar('\n');
	return (0);
}
