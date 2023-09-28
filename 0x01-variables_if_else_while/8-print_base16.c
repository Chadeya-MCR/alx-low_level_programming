#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}

	for (number = 'a'; number <= 'f'; number++)
	{
		putchar(number);
	}

	putchar('\n');

return (0);
}
