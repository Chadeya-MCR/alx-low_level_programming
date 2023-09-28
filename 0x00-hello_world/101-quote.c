#include <unistd.h>
#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a specific message to the standard error.
 * Return: 1 (Failure)
 */
int main(void)
{
	const char *text_message = "and that piece of art is useful\"\
- Dora Korpar, 2015-10-19\n";

	write(2, text_message, 59);
	return (1);
}
