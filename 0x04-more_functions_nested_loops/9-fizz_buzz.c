#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 == 0)
	{
		printf("FizzBuzz");
		printf(" ");
	}
	else if (i % 3 == 0)
	{
		printf("Fizz");
		printf(" ");
	}
	else if (i % 5 == 0)
	{
		printf("Buzz");
		printf(" ");
	}
	else
	{
	printf("%d ", i);
	printf(" ");
	}
	}
printf("\n");

return (0);
}
