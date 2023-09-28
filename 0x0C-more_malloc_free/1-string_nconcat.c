#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Description:This function concatenates the string @s1
 * with the first @n bytes of the string @s2.
 * The resulting string is stored in a
 * newly allocated space in the memory.
 * If either @s1 or @s2 is NULL, they are treated as empty strings.
 * If @n is greater than or equal to the length
 * of @s2, the entire string @s2 is concatenated.
 * If the concatenation or memory allocation
 * fails, the function returns NULL.
 *
 * Return: Pointer to the concatenated
 * string s1 then s2 or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0;
	char *string, *ptr;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (n >= len2)
		n = len2;

	string = malloc(sizeof(char) * (len1 + n + 1));
	if (string == NULL)
		return (NULL);
	ptr = string;
	while (*s1)
	{
		*ptr = *s1;
		ptr++;
		s1++;
	}
	for (i = 0; i < n; i++)
	{
		*ptr = s2[i];
		ptr++;
	}
	*ptr = '\0';
	return (string);
}

