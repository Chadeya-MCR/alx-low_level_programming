#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Double pointer to the first node of the list.
 *
 * Return: The data (n) of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *temp;

	if (head != NULL && *head != NULL)
	{
	temp = *head;
	i = temp->n;
	*head = (*head)->next;
	free(temp);
	}

	return (i);
}

