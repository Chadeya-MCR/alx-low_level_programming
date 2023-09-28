#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - This frees a list_t list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *current = head;

		head = head->next;

		free(current->str);
		free(current);
	}
}

