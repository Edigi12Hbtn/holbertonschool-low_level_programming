#include "holberton.h"

/**
  * rot13 - root 13 encoder
  *
  * @s: array to encode
  *
  * Return: array s
  *
  */

char *rot13(char *s)
{
	int i = 0, j = 0;
	char arr_1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char arr_2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
			if (s[i] == arr_1[j])
			{
				s[i] = arr_2[j];
				break;
			}
		i++;
	}
	return (s);
}
