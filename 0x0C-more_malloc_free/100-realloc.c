#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free
 *
 * @ptr: Pointer to the memory block that was previuosly assigned by malloc
 * @old_size: Size, in bytes, of the allocated space for ptr
 * @new_size: New size, in bytes, of the new memory block
 *
 * Description: reallocates the memory block pointed
 * to by @ptr using malloc and free.
 * If @new_size > @old_size, the "added" memory is uninitialized.
 * If @new_size is equal to @old_size,
 * the function does nothing and returns @ptr.
 * If @ptr is NULL, the call is equivalent
 * to malloc(@new_size) for all values of @old_size and @new_size.
 * If @new_size is zero and @ptr is not NULL,
 * the call is equal to free(@ptr), and NULL is returned.
 *
 * Return: a Pointer to the reallocated memory_block
 * or NULL on failure or when @new_size is zero
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *my_pointer;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	my_pointer = malloc(new_size);
	if (my_pointer == NULL)
		return (NULL);

	if (new_size < old_size)
		old_size = new_size;

	for (i = 0; i < old_size; i++)
		((char *)my_pointer)[i] = ((char *)ptr)[i];

	free(ptr);
	return (my_pointer);
}

