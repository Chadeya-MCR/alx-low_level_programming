#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 * Description: This function prints the alphabet in lowercase 10 times,
 *followed by a new line.
 */
void print_alphabet_x10(void)
{
	char letter;
	int count;

	for (count = 1; count <= 10; count++)

	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
	_putchar('\n');
	}
}
