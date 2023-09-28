#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: Pointer to the capitalized string.
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize = 1;

	while (*ptr)
	{
		if (capitalize && islower(*ptr))
			*ptr = toupper(*ptr);

		if ((*ptr == ' ') || (*ptr == '\t') || (*ptr == '\n') ||
		    (*ptr == ',') || (*ptr == ';') || (*ptr == '.') ||
		    (*ptr == '!') || (*ptr == '?') || (*ptr == '"') ||
		    (*ptr == '(') || (*ptr == ')') || (*ptr == '{') ||
		    (*ptr == '}'))
			capitalize = 1;
		else
			capitalize = 0;

		ptr++;
	}

	return (str);
}
