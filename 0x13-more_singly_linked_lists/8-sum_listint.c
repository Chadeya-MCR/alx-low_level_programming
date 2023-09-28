#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data
 * @head: Pointer to the first node of the list.
 *
 * Return: The sum of all the data (n) or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

