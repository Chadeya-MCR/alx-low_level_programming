#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Description: This code adds twp numbers the prints the result.
 * The positive numbers to be added are obtained from the command-line
 * arguments. If no numbers are passed, it prints 0. If any of the numbers
 * contain symbols that are not digits, it prints an error message and
 * returns 1. Otherwise, it performs the addition and prints the result,
 * followed by a new line.
 *
 * Return: 0 if successful, 1 if an error occurs
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, num;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (num = 0; argv[i][num] != '\0'; num++)
		{
			if (argv[i][num] < '0' || argv[i][num] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

