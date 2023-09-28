#include <limits.h>

/**
 * _atoi - Converts a string to be  an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int reslt = 0;
	int i = 0;


	while (s[i] == ' ')
		i++;


	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}


	while (s[i] >= '0' && s[i] <= '9')
	{
		int digit = s[i] - '0';


		if (reslt > INT_MAX / 10 || (reslt == INT_MAX / 10 && digit > INT_MAX % 10))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}

		reslt = reslt * 10 + digit;
		i++;
	}

	return (sign * reslt);
}
