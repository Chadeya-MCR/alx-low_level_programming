#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in the array using the cmp function.
 * @array: Pointer to the integer array.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the compared function.
 *
 * Return: Index of the first element for which the
 * cmp function does not return 0,
 * or -1 if no element matches or size is less than or equal to 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}

