#include "main.h"
/**
 * wildcmp - Compares two strings with support for wildcard character *
 * @s1: The first string
 * @s2: The second string with wildcard character
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);

		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);

		return (wildcmp(s1, s2 + 1));
	}

	if (*s1 == *s2 && *s1 != '\0')
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
