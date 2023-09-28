#include <stdlib.h>

/**
 * create_array - creates array and initilize it with a character
 *
 * @size: The number of elements to be allocated for the array.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the created array, or NULL if size = 0
 * or memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);


	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}


