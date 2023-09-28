#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int j = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int i = 0;

	while (j)
	{
		if (n & j)
		{
			putchar('1');
			i = 1;
		}
		else if (i)
			putchar('0');

		j >>= 1;
	}

	if (!i)
		putchar('0');
}

