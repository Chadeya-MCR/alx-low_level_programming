#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to the integer array.
 * @size: Size of the array.
 * @action: Pointer to the function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL || size == 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

