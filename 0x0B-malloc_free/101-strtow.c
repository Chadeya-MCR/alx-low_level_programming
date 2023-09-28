#include <stdlib.h>
#include <string.h>

/**
 * strtow - Splits a string into words.
 *
 * @str: The string to be split.
 *
 * Return: A pointer to an array of strings
 * or NULL if str == NULL or str == "" or if it fails.
 */

char **strtow(char *str)
{
	int i, j, k, words_count = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			words_count++;
	words = malloc((words_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] == '\0')
			break;
		j = i;
		while (str[j] != ' ' && str[j] != '\0')
			j++;
		words[k] = malloc((j - i + 1) * sizeof(char));
		if (words[k] == NULL)
		{
			while (k >= 0)
				free(words[k--]);
			free(words);
			return (NULL);
		}
		strncpy(words[k], &str[i], j - i);
		words[k][j - i] = '\0';
		k++;
		i = j;
	}
	words[k] = NULL;
	return (words);
}


