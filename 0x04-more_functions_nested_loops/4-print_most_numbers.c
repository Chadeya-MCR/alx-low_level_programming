#include "main.h"
/**
 *print_most_numbers - prints numbers from 0-9 excluding 2 and 4
 *Return: o for succes
 */
void print_most_numbers(void)
{
	int numbers;

for (numbers = 0; numbers <= 9; numbers++)
{
	if (numbers == 2 || numbers == 4)
		{
		continue;
		numbers++;
	_putchar(numbers + '0');
}
	_putchar('\n');
	}
}
