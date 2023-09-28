#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Description: This program prints all the arguments it receives.
 * It prints each argument on a separate line, including the first one.
 * The arguments are obtained from the argv parameter, which is an array
 * of strings containing the command-line arguments.
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

