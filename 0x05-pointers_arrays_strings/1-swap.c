#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 *
 * Description: This function swaps the values of two integers by
 *              modifying their pointers.
 */
void swap_int(int *a, int *b)
{
	int temporary_variable;

	temporary_variable = *a;
	*a = *b;
	*b = temporary_variable;
}
