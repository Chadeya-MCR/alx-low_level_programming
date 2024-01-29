#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the bytes to match.
 *
 * Description: This function searches the string s
 * for the first occurrence of any of the bytes
 * present in the accept string.
 *
 * Return: Pointer to the byte in s
 * that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *temp = accept;

		while (*temp != '\0')
	{
		if (*s == *temp)
		return (s);
	temp++;

	}
	s++;

	}

	return (NULL);

}

