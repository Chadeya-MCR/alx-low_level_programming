#include "lists.h"
#include <stddef.h>

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: A pointer to the head (first node) of the linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *current = h;

	while (current)
	{
	counter++;
	current = current->next;
	}

	return (counter);
}
