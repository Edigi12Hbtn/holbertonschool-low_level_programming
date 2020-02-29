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
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
