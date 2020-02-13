#include <stdio.h>

/**
 * main - Entry point
 *
 * retutn - retsl
 *
 */

int main(void)
{
	int i;
	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz ");
			else
				printf(" ");
		}
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
