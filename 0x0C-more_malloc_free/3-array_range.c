#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers
 *
 * @min: Minimum value of the range
 * @max: Maximum value of the range
 *
 * Description:This function creates an array of
 * integers that contains all the values from @min to @max
 * It is ordered in ascending order from @min to @max.
 * If @min is greater than @max, the function returns NULL.
 * If the memory allocation using malloc fails
 * the function also returns NULL.
 *
 * Return: Pointer to the newly created array or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, arr_size;

	if (min > max)
		return (NULL);

	arr_size = max - min + 1;
	arr = malloc(sizeof(int) * arr_size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < arr_size; i++)
		arr[i] = min++;

	return (arr);
}

