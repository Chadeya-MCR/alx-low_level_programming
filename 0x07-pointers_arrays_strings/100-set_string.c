#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to a pointer to a char.
 * @to: Pointer to a char representing the value to set.
 *
 * Description: This function takes a pointer
 * to a pointer to a char (@s) and
 *a pointer to a char (@to). It sets
 *the value of @s to point to
 *the same memory location as @to
 effectively changing the value
 *of the pointer.
 */
void set_string(char **s, char *to)
{
	*s = to;
}

