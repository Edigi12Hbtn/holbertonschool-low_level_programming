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
	int num, i, j;

	num = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; *(argv[i] + j) != '\0'; j++)
			{
				if (*(argv[i] + j) < '0' || *(argv[i] + j) > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			num += atoi(argv[i]);
		}
		printf("%d\n", num);
	}
	return (0);
}
