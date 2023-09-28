#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: Size in bytes to allocate
 *
 * This function allocates memory of size @b using the malloc function.
 * If the allocation fails (malloc returns NULL), the function prints an error
 * message and terminates the program with a status value of 98.
 *
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
	exit(98);
	}

	return (ptr);
}
