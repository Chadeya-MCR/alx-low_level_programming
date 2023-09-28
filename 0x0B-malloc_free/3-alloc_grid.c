#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers.
 *
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: points to the 2-dimensional array, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **morgan;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	morgan = malloc(height * sizeof(int *));

	if (morgan == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		morgan[i] = malloc(width * sizeof(int));

		if (morgan[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(morgan[j]);
			free(morgan);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			morgan[i][j] = 0;
	}

	return (morgan);
}

