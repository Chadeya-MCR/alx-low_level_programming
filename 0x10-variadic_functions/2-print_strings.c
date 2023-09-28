#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - Print strings followed by a new line.
 * @separator: The string to be printed between the other strings.
 * If the separator is NULL, don't print it.
 * @n: The number of strings passed to the function.
 *     If n is 0, print a new line and return.
 * @...: The variable number of strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int j;
	char *str;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	for (j = 0; j < n; ++j)
	{
		str = va_arg(args, char *);


		printf("%s", (str == NULL) ? "(nil)" : str);

		if (separator != NULL && j < n - 1)
		{

			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}

