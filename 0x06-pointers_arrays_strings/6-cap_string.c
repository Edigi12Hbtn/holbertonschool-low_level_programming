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
			if ((s[i + 1] >= 'a') && (s[i + 1] <= 'z'))
				s[i + 1] -= 32;
		}
		i++;
	}
	return (s);
}
