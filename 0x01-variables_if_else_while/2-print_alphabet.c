#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase,
 * then a newline
 * Return: 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 26; x++)
		putchar('a' + x);

	putchar('\n');

return (0);
}
