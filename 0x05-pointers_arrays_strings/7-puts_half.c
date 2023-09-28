#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line
 * @str: The input string
 *
 * Description: This function calculates the length of the string and then
 *determines the starting index for printing the second half.
 *If the length is odd, it prints the last (length - 1) / 2
 *characters of the string. If the length is even, it prints
 *the last length / 2 characters of the string.
 *After printing the second half, it prints a new line character.
 */
void puts_half(char *str)
{
	int length = 0;
	int count;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		count  = length / 2;
	}
	else
	{
		count = (length - 1) / 2;
	}

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}

	_putchar('\n');
}

