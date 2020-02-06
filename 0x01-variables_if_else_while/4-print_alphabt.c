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
		if ((c != 'q') && (c != 'e'))
			putchar(c);
		c += 1;
	}
	putchar('\n');
	return (0);
}
