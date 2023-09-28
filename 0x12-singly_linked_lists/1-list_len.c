#include <stddef.h>
#include "lists.h"
/**
 * list_len - This returns the number of
 * elements in a singly linked list_t list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
	counter++;
	h = h->next;
	}

	return (counter);
}

