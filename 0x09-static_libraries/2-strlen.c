#include "main.h"
/**
 * _strlen - Calculates the length of a string
 * @s: The input string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}

