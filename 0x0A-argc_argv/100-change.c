#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Description: The code below finds the minimum coines needed
 * to make change for an amount of money in cents. The amount of money is
 * obtained from the command-line argument. If the number of arguments is not
 * exactly 1, it prints an error message and returns 1. If the amount of money
 * is negative, it prints 0. Otherwise, it performs the calculation to find
 * the minimum number of coins and prints the result, followed by a new line.
 *
 * Return: 0 if successful, 1 if an error occurs
 */
int main(int argc, char *argv[])
{
	int amount, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	while (amount > 0)
	{
		if (amount >= 25)
			amount -= 25;
		else if (amount >= 10)
			amount -= 10;
		else if (amount >= 5)
			amount -= 5;
		else if (amount >= 2)
			amount -= 2;
		else
			amount -= 1;

		coins++;
	}

	printf("%d\n", coins);
	return (0);
}

