#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - A function that prints a name using a function
 * @name: The name to be printed
 * @f: Pointer to the function used to print
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
