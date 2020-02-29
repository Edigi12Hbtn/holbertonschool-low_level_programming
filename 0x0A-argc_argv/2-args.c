#include "holberton.h"
#include <stdio.h>

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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
