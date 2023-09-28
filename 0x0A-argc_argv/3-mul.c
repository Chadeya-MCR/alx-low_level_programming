#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Description: this code multiplies two numbers and displays the result.
 * The two numbers to be multiplied are obtained from the command-line
 * arguments. If the program does not receive two arguments, it prints an
 * error message and returns 1. Otherwise, it performs the multiplication
 * and prints the result, followed by a new line.
 *
 * Return: 0 if successful, 1 if an error occurs
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}

