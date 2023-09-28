#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int digit1;
	int digit2;

	for (digit1 = 0; digit1 <= 9; digit1++)
		{
			for (digit2 = digit1; digit2 <= 9; digit2++)
			{
			putchar((digit1 % 10) + '0');
			putchar(' ');
			putchar((digit2 % 10) + '0');

		if (digit1 == 9 && digit2 == 9)
		continue;

		putchar(',');
		putchar(' ');
		}
		}

	putchar('\n');
return (0);
}
