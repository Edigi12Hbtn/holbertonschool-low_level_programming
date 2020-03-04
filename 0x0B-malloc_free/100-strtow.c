#include "holberton.h"
#include <stdlib.h>

/**
 * str_format - delete repeated spaces in words array.
 *
 * @str: string of words.
 * Return: str_fmt pointer - formatted string of words.
 */
char *str_format(char *str)
{
	char *str_fmt;
	int i = 0, j = 0, str_len = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	while (str[str_len] != '\0')
		str_len++;
	str_len--;

	str_fmt = malloc((str_len + 1) * sizeof(char));
	if (str_fmt == NULL)
		return (NULL);

	while(str[i] != '\0')
	{
		if (str[i] == ' ' && str[i + 1] == ' ')
		{
			i++;
		}
		else if (str[i] == ' ' && j == 0)
		{
			i++;
		}
		else if (str[i] == ' ' && str[i + 1] == '\0')
		{
			i++;
		}
		else
		{
			str_fmt[j++] = str[i++];
		}
	}
	str_fmt[j] = '\0';
	return (str_fmt);
}

/**
 * sizes_count- word sizes counter.
 *
 * @sizes: array of sizes.
 * @str: string of words.
 */

void sizes_count(int *sizes, char *str)
{
	int i = 0, j = 0;

	while(str[i] != '\0')
	{
		if (str[i] == ' ')
			j++;
		else
			sizes[j] += 1;
		i++;
	}
	sizes[++j] = 0;
}

/**
 * strtow - returns matrix of words.
 *
 * @str: string of words.
 *
 * Return: array of separated words.
 */

char **strtow(char *str)
{
	char **p;
	int *sizes;
	int n_spaces = 0, i = 0, j = 0, k = 0;
	char *str_fmt;

	str_fmt = str_format(str);
	if (str_fmt == NULL)
		return (NULL);
	
	
	while (str_fmt[i] != '\0')
	{
		if (str_fmt[i] == ' ')
			n_spaces++; 
		i++;
	}
	sizes = malloc((n_spaces + 1 + 1) * sizeof(int)); /*n_spaces + 1 = #_of_words. 1 for NULL ending pointer.*/
	if (sizes == NULL)
		return (NULL);
	sizes_count(sizes, str_fmt);
	p = malloc((n_spaces + 1 + 1) * sizeof(char *));
	if (p == NULL)
	{
		free(sizes);
		return (NULL);
	}
	for (i = 0; i < n_spaces + 1; i++)
	{
		p[i] = malloc((sizes[i] + 1) * sizeof(char)); /*size of word + 1 (for null character)*/
		if (p[i] == NULL)
		{
			free(sizes);
			for (j = 0; j < i; j++)
				free(p[i]);
			free(p);
			return (NULL);
		}
	}
	p[i] = NULL;
	for (i = 0; p[i] != NULL; i++)
	{
		j = 0;
		while(str_fmt[k] != ' ' && str_fmt[k] != '\0')
		{
			p[i][j] = str_fmt[k];
			k++;
			j++;
		}
		k++;
		p[i][j] = '\0';
	}
	return (p);
}
