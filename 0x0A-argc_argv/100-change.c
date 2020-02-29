#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * @argc: number of command line arguments.
 * @argv: pointers to parameters inserted on the command line.
 *
 * Return: return sucess.
 */

int main(int argc, char *argv[])
{
	int cents, coins, i;
	int values[] = {25, 10, 5, 2, 1}; 

	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
			return(0);
		}
		else
		{
			cents = atoi(argv[1]);

			i = 0;
			while (cents != 0)
			{
				while (cents < values[i])
					i++;
				cents -= values[i];
				coins++;
			}
			printf("%d\n", coins);
			return (0);
		}
	}
}
