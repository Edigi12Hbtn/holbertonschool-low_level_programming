#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 *
 * @ac: Arguments counter.
 * @av: Arguments vector.
 *
 * Return: Returns a pointer to a new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int *sizes_p1; /*sizes of strings plus one*/
	int i = 0, j = 0, tot_size = 0, i_bef = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	sizes_p1 = malloc(ac * sizeof(int));
	if (sizes_p1 == NULL)
	{
		free(sizes_p1);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		sizes_p1[i] = 0;
		if (av[i] != NULL)
		{
			while (av[i][sizes_p1[i]] != '\0')
				sizes_p1[i]++;
			sizes_p1[i]++;
		}
	}
	for (i = 0; i < ac; i++)
		tot_size += sizes_p1[i];
	str = malloc((tot_size + 1) * sizeof(char));
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < sizes_p1[i] - 1; j++)
			str[i_bef + j] = av[i][j];
		str[i_bef + j] = '\n';
		j++;
		i_bef += j;
	}
	str[i_bef] = '\0';
	return (str);
}
