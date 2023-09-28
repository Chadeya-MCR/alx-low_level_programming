#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int number1, number2;

	for (number1 = 0; number1 < 9; number1++)
	{
		for (number2 = number1 + 1; number2 < 10; number2++)
			{
				putchar(number1 + '0');
				putchar(number2 + '0');

				if (number1 != 8 || number2 != 9)
					{		
					putchar(',');
					putchar(' ');
					}		
			}
	}

	putchar('\n');

return (0);
}
