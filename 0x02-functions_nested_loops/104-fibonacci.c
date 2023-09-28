#include <stdio.h>

/**
 * Entry point of the program. Generates and prints the Fibonacci sequence.
 *
 * @return The exit status of the program.
 */

void print_fibonacci_sequence(int count)
{
	int num1 = 1;
	int num2 = 2;

	printf("%d, %d", num1, num2);
		count -= 2;

while (count > 0)
{
	int nextNum = num1 + num2;
		printf(", %d", nextNum);

	num1 = num2;
	num2 = nextNum;

	count--;
}

	printf("\n");
}

int main(void)
{
	int count = 98;

		print_fibonacci_sequence(count);
return (0);
}
