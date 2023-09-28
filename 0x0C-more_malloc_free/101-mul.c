#include <stdio.h>
#include <stdlib.h>

/**
 * multiplication - This function multiplies two numbers
 * @num1: First number to multiply
 * @num2: Second number to multiply
 * Description - This function multiplies two
 * numbers passed in and prints the product
 * Return: The product of num1 and num2
 */
int multiplication(int num1, int num2);

/**
 * print_result - prints the result
 * Description:This function prints the
 * result followed by a newline character.
 * @result: The result to be printed
 */
void print_result(int result);

/**
 * is_positive_value - Checks if a string represents
 * a positive number
 * @str: The string to be checked
 * Description:This function checks if a given
 * string represents a positive integer.
 *
 * Return: 1 if str is a positive integer, 0 if negative
 */
int is_positive_value(const char *str);

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Description:This program multiplies two positive
 * numbers passed as command-line arguments.
 * result is printed followed by a newline character.
 *
 * Return: 0 always for success, 98 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_positive_value(argv[1]) || !is_positive_value(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multiplication(num1, num2);
	print_result(result);

	return (0);
}

int multiplication(int num1, int num2)
{
	return (num1 * num2);
}

void print_result(int result)
{
	printf("%d\n", result);
}

int is_positive_value(const char *str)
{
	if (str == NULL || *str == '\0')
		return (0);

	while (*str)
	{
	if (*str < '0' || *str > '9')
	return (0);
	str++;
	}

	return (1);
}

