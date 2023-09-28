#include "variadic_functions.h"

#include <stdarg.h>

/**
 * sum_them_all - Calculate the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 * If n == 0, return 0.
 * @...: The variable number of arguments.
 *
 * Return: The sum of all the parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
	{

		return (0);
	}


	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
