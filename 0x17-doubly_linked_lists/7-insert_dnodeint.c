#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the address of the head of the doubly linked list.
 * @idx: Index where the new node should be added. Index starts at 0.
 * @n: Value to be assigned to the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int count = 0;
	
	if (new_node == NULL)
	{
	dprintf(2, "Error: Can't malloc\n");
	return (NULL);
	}
	new_node->n = n;
	if (*h == NULL && idx != 0)
	{
	free(new_node);
	return (NULL);
	}
	if (idx == 0)
	{
	new_node->next = *h;
	new_node->prev = NULL;
	if (*h != NULL)
	(*h)->prev = new_node;
	*h = new_node;
	return (new_node);
	}

	while (current != NULL && count < idx - 1)
	{
	current = current->next;
	count++;
	}
	if (current == NULL)
	{
	free(new_node);
	return (NULL);
	}
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
	current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}

