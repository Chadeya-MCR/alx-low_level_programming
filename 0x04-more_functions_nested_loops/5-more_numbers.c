#include "main.h"
/**
 * more_numbers - Prints numbers 10times.
 * @i - first integer
 * @j - second integer
 * Return: always 0
 */
void more_numbers(void)
{
	int num;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num);
			_putchar('\n');
		}
	}
}
