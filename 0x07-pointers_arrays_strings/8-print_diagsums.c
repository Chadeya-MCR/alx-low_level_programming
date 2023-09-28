#include <stdio.h>

/**
 * 
 *print_diagsums-description-prints the length of the diagonal
 *of a square matrix of integers.
 *
 * @param a    Pointer to the first element of the matrix.
 * @param size Size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int mainDiagonalSum = 0;
	int secondaryDiagonalSum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
	mainDiagonalSum += *(a + i * size + i);
	secondaryDiagonalSum += *(a + i * size + (size - 1 - i));
	}

	printf("Sum of main diagonal: %d\n", mainDiagonalSum);
	printf("Sum of secondary diagonal: %d\n", secondaryDiagonalSum);
}
