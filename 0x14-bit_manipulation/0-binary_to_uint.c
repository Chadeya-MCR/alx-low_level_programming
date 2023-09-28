#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string containing a binary number.
 *
 * Return: The converted number, or 0 if:
 * - @b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j  = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		j = (j << 1) + (b[i] - '0');
		i++;
	}

	return (j);
}

