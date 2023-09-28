#include <stdio.h>
#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number whose bit needs to be set.
 * @index: The index of the bit, starting from 0
 *
 * Return: 1 if it correct otherwise -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (index >= sizeof(unsigned long int) * 8)
	return (-1);

	j = 1UL << index;
	*n = (*n | j);

	return (1);
}

