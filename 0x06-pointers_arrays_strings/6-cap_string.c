#include "holberton.h"

/**
 * cap_string - capitalize words
 *
 * @s: string
 *
 * Return: return string
 */

char *cap_string(char *s)
{
	int i = 0, lfalphabet = 0;

	if ((s[0] >= 'a') && (s[0] <= 'z'))
		s[0] -= 32;

	while (s[i] != '\0')
	{
		if (lfalphabet == 0)
		{
			if ((s[i] == ',') || (s[i] == ';') || (s[i] == '.')
			 || (s[i] == '!') || (s[i] == '?') || (s[i] == '"')
			 || (s[i] == '(') || (s[i] == ')') || (s[i] == '{')
			 || (s[i] == '}') || (s[i] == 32) || (s[i] == 9)
			 || (s[i] == '\n'))
			{
				lfalphabet = 1;
				while ((s[i] == ',') || (s[i] == ';') || (s[i] == '.')
				|| (s[i] == '!') || (s[i] == '?') || (s[i] == '"')
				|| (s[i] == '(') || (s[i] == ')') || (s[i] == '{')
				|| (s[i] == '}') || (s[i] == 32) || (s[i] == 9)
				|| (s[i] == '\n'))
				{
					i++;
				}
			}
		}
		if (lfalphabet == 1)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
				lfalphabet = 0;
			}
			else
				lfalphabet = 0;
		}
		i++;
	}
	return (s);
}
