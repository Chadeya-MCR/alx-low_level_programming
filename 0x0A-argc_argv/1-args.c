#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Description: This program prints the number of arguments passed to it.
 * The number of arguments is obtained from the argc parameter, which
 * represents the count of command-line arguments. The program prints
 * the count using printf, followed by a new line.
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}

