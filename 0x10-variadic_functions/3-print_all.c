#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_all - Print anything based on the format provided.
 * @format: The format string representing the types of arguments.
 * m : char
 * i: integer
 * floatNumber: float
 * s: char * (if the string is NULL, print (nil) instead)
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int number;
	float floatNumber;
	char m;
	unsigned int i = 0;

	va_start(args, format);
	while (format && format[i])
	{
	switch (format[i])
	{
		case 'm':
		m = va_arg(args, int);
		printf("%c", m);
		break;
		case 'i':
		number = va_arg(args, int);
		printf("%d", number);
		break;
		case 'f':
		floatNumber = va_arg(args, double);
		printf("%f", floatNumber);
		break;
		case 's':
		str = va_arg(args, char *);
			if (str == NULL)
			printf("(nil)");
		else
		printf("%s", str);
		break;
		default:
		printf("Something is not okay");
	}
	if (format[i + 1] != '\0')
	{
		printf(", ");
	} i++;
	} va_end(args);
	 printf("\n");
}
