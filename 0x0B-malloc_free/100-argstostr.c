#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 *
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: points to the concatenated string, or
 * NULL if ac == 0 or av == NULL or if it fails.
 */
char *argstostr(int ac, char **av)
{
	int sum_length;
	int i, j, k = 0;
	int len;
	char *string_con;

	sum_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		sum_length += len;
	}

	sum_length += ac;

	string_con = malloc((sum_length + 1) * sizeof(char));

	if (string_con == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);

		for (j = 0; j < len; j++)
		{
			string_con[k] = av[i][j];
			k++;
		}

		string_con[k] = '\n';
		k++;
	}

	string_con[k] = '\0';

	return (string_con);
}

