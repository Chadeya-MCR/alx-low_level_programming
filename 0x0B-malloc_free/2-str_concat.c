#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 *
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	string = malloc((len1 + len2 + 1) * sizeof(char));

	if (string == NULL)
		return (NULL);

	strcpy(string, s1);
	strcat(string, s2);

	return (string);
}

