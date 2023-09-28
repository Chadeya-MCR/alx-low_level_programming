#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - chooses the correct function to perform the operation
 * asked by the user.
 * @s: The operator passed as  argument.
 *
 * Return: A pointer to the function that corresponds to the operator given
 * as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t user_selection[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (user_selection[i].op != NULL)
{
	if (*(user_selection[i].op) == *s && s[1] == '\0')
	return (user_selection[i].f);
	i++;
}

return (NULL);
}

