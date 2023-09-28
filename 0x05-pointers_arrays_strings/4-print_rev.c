#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: The string to be printed in reverse
 *
 * Description: This function calculates the length of the string and then
 *iterates backwards through the characters, using the _putchar
 *function to print them. It starts from the last character
 *and continues until the first
 *character of the string. After printing the reversed string,
 *it prints a new line character.
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (length--; length >= 0; length--)
	{
		_putchar(s[length]);
	}

	_putchar('\n');
}

