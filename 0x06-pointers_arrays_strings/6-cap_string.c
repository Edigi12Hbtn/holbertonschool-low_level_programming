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
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] == ',') || (s[i] == ';') || (s[i] == '.') || (s[i] == '!') || (s[i] == '?') || (s[i] == '"') || (s[i] == '(') || (s[i] == ')') || (s[i] == '{') || (s[i] == '}') || (s[i] == ' ') || (s[i] == '	') || (s[i] == '\n'))
		{
			i++;
			if ((s[i] >= 'a') && (s[i] <= 'z'))
				s[i] -= 32;
		}
		i++;
	}
	return (s);
}
