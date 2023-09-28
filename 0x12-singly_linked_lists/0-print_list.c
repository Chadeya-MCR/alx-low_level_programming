#include <stdio.h>
#include "lists.h"
/**
 * print_list - This function Prints all the elements of a list_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	size_t vari_name = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);

	h = h->next;
	vari_name++;
}

	return (vari_name);
}

