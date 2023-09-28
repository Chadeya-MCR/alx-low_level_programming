#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A double pointer to the head (first node) of the linked list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *created_node;
	listint_t *current = *head;

	created_node = malloc(sizeof(listint_t));

	if (!created_node)
		return (NULL);

	created_node->n = n;
	created_node->next = NULL;

	if (*head == NULL)
		*head = created_node;

	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = created_node;
	}

	return (created_node);
}
