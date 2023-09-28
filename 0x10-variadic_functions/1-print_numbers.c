#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * If the separator is NULL, don't print it.
 * @n: The number of integers passed to the function.
 *  If n is 0, a new line is printed and return.
 * @...: The variable number of integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int number;

	if (n == 0)
	{

		printf("\n");
		return;
	}
	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		number = va_arg(args, int);
		printf("%d", number);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}

