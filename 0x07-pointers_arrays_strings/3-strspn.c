#include "holberton.h"

/**
 * int _strspn -  gets the length of a prefix substring.
 *
 * @s: string
 * @accept: letters for match
 *
 * Return: Returns the number of bytes in the initial segment of s which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, pass = 1, match = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		pass = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				pass = 1;
				match++;
			}
		}
		if (pass == 0)
			break;
	}
	return (match);
}
