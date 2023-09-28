#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array
 *
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Description:This function allocates memory for
 * an array of @nmemb elements, each of size @size bytes.
 * memory is initialized to zero.
 * If either @nmemb or @size is 0, the function returns NULL.
 * If the memory allocation using malloc fails, the function also returns NULL.
 *
 * Return: Pointer to the allocated memory or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int totl_size, i;
	unsigned char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	totl_size = nmemb * size;
	ptr = malloc(totl_size);

	if (ptr == NULL)
		return (NULL);


	p = ptr;

	for (i = 0; i < totl_size; i++)
		p[i] = 0;

	return (ptr);
}

