#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Returns the number of bits
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j = n ^ m;
	unsigned int i = 0;

	while (j)
	{
	i += j & 1;
	j >>= 1;
	}

	return (i);
}

