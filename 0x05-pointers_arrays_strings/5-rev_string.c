#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 *
 * Description: This function reverses a string by swapping the characters
 *              from the beginning with the characters from the end of the
 *              string. It continues until the pointers meet in the middle.
 */
void rev_string(char *s)
{
	int beginning = 0;
	int end = 0;
	char temp;

	while (s[end] != '\0')
	{
		end++;
	}

	end--;


	while (beginning < end)
	{
		temp = s[beginning];
		s[beginning] = s[end];
		s[end] = temp;

		beginning++;
		end--;
	}
}

