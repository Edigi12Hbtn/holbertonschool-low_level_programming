#include "3-calc.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: number of arguments pased to main fuction.
 * @argv: arguments like
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0' || (argv[2][0] != '+' && argv[2][0]
	 != '-' && argv[2][0] != '*' && argv[2][0] != '/' && argv[2][0] != '%'))
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '%' || *argv[2] == '/') && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	f = get_op_func(argv[2]);

	result = f(atoi(argv[1]), atoi(argv[3]));
	/*result = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));*/

	printf("%d\n", result);
	return (0);
}
