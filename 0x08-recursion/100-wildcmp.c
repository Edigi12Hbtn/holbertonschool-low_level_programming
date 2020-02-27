#include "holberton.h"

/**
 * wildcmp - compare two strings.
 *
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: - 1 if strings match, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 != '\0')
	{
		if (*s2 != '*')
		{
			if (*s1 == *s2)
				return (wildcmp(s1 + 1, s2 + 1));
			else
				return (0);
		}
		else
		{
			if (*(s2 + 1) != '*')
			{
				if (*(s2 + 1) == *s1)
				{
					s1++;
					s2 += 2;
					return (wildcmp(s1, s2));
				}
				else
				{
					s1++;
					return (wildcmp(s1, s2));
				}
			}
			else
			{
				s2++;
				return (wildcmp(s1, s2));
			}
		}
	}
	else if (*s2 == '\0')
	{
		if (*s1 == '\0')
			return (1);
		else
			return (0);
	}
	else
	{
		if (*s2 != '*')
			return (0);
		else
			return (wildcmp(s1, s2 + 1));
	}
}
