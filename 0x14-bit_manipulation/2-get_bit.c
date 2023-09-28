#include <stdio.h>
#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index of the bit, starting from 0.
 *
 * Return: The value of the bit at index index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int j;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	j = 1UL << index;

	return ((n & j) ? 1 : 0);
}
