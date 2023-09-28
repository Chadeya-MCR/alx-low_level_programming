#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Double pointer to the first node of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast;
	size_t count = 0;

	if (h == NULL)
		return (0);

	slow = *h;
	fast = *h;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			count++;
			slow = *h;
			while (slow != fast)
			{
				count++;
				slow = slow->next;
				fast = fast->next;
			}
			while (fast->next != slow)
			{
				count++;
				fast = fast->next;
			}

			while (count > 0)
			{
				listint_t *temp = *h;
				*h = (*h)->next;
				free(temp);
				count--;
			}
			return (count);
		}
	}

	while (*h != NULL)
	{
		listint_t *temp = *h;
		*h = (*h)->next;
		free(temp);
		count++;
	}

	return (count);
}

