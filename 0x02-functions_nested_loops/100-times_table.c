#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number of rows and columns in the times table.
 *
 * Description: This function prints the n times table, starting with 0, up
 *to the value of @n. The table is printed in a well-formatted
 *manner with columns and rows. If @n is greater than 15 or less
 *than 0, the function does not print anything.
 */
void print_times_table(int n)
{
	int i;
	int j;

if (n < 0 || n > 15)
	return;

for (i = 0; i <= n; i++)
{
	for (j = 0; j <= n; j++)
{
		int result = i * j;

		if (j != 0)
		_putchar(' ');

		if (result < 10)
{
		_putchar(' ');
		_putchar(' ');
		_putchar(result + '0');
}
else if (result < 100)
{
	_putchar(' ');
	_putchar(result / 10 + '0');
	_putchar(result % 10 + '0');
}
else
{
	_putchar(result / 100 + '0');
	_putchar((result / 10) % 10 + '0');
	_putchar(result % 10 + '0');
}

	if (j != n)
	_putchar(',');
}
_putchar('\n');
}
}

