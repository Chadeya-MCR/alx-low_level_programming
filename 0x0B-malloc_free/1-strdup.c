#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated
 * space in memory containing a copy of the string.
 *
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the duplicated string, or
 * NULL if str = NULL or memory allocation fails.
 */
char *_strdup(char *str)
{
	size_t len;
	char *dup;

	if (str == NULL)
		return (NULL);


	len = strlen(str);

	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	strcpy(dup, str);

	return (dup);
}


