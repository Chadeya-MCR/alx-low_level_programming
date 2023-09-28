#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, excluding 'q' and 'e'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{

		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
	}

	putchar('\n');
return (0);
}
