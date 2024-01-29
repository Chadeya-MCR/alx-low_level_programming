#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout
 * @str: The string to be printed
 *
 * Description: This function iterates through each character of the string
 *and uses the _putchar function to print it. It continues
 *until it reaches the null terminator ('\0') character.
 *After printing the string, it prints a new line character.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}

