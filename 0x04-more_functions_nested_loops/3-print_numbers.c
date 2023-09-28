#include "main.h"
/**
 * print_numbers - prints numbers from 0-9
 * Return: 0 (succes)
 */
void print_numbers(void)
{
	int number;

for (number = 0; number <= 9; number++)
	_putchar(number + '0');
		_putchar('\n');
}
