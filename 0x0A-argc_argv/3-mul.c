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
	int num;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", num);
		return (0);
	}	
}
