#include "main.h"

/**
 * puts2 - Prints every other character from the last
 * @str: The input string
 *
 * Description: This function loops thru the characters of the string and uses
 *the _putchar function to print every other character, starting from
 *the first character. It continues until it reaches the null terminator
 *character. After printing the characters, it prints a new line character.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}

	_putchar('\n');
}

