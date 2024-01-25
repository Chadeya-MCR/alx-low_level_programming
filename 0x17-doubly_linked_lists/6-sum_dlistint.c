#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: The sum of all data in the list. If the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
	sum += current->n;
	current = current->next;
	}

	return (sum);
}

