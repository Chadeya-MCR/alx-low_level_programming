#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the first node of the list.
 *
 * Return: The address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL || head->next == NULL)
	return (NULL);

	slow = head;
	fast = head;

	while (fast != NULL && fast->next != NULL)
	{
	slow = slow->next;
	fast = fast->next->next;

	if (slow == fast)
	{
		slow = head;
			while (slow != fast)
			{
			slow = slow->next;
			fast = fast->next;
			}
			return (slow);
	}
	}

	return (NULL);
}

