#include "main.h"

/**
 * print_array - Prints n elements of an array of integers, then line
 * @a: The input array
 * @n: The number of elements to be printed
 *
 * Description: This function loops thru the array and using _putchar
 *to print the elements.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{

		int num = a[i];
		int numb2 = 1;

		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}

		while (numb2 <= num / 10)
			numb2 *= 10;

		while (numb2 > 0)
		{
			_putchar('0' + num / numb2);
			num %= numb2;
			numb2 /= 10;
		}

		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('\n');
}

