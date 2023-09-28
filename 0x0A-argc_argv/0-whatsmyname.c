#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Description: This program prints its name, followed by a new line.
 * The program name is obtained from argv[0], which represents the
 * name of the program as executed from the command line, including
 * the path if provided. The program name is printed using printf.
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}

