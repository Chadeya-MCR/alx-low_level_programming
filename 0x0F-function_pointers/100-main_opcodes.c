#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *main_opcodes = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_opcodes[i]);
		if (i < num_bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}

