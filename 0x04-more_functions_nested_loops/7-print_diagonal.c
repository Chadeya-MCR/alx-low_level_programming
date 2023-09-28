#include "main.h"
/**
 * print_diagonal - Draws a diagonal line in the terminal.
 * @n: The number of times the character '\' should be printed.
 * Return:  0 success
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
{
	_putchar('\n');
return;
}

	for (i = 0; i < n; i++)
{
	for (j = 0; j < i; j++)
	{
		_putchar(' ');
}
		_putchar('\\');
		_putchar('\n');
}
}

