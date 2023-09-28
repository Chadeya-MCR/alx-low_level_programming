#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer of the head of the list
 * @str: string to be duplicated and added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *created_node;

	if (str == NULL)
		return (NULL);

	created_node = malloc(sizeof(list_t));

	if (created_node == NULL)
		return (NULL);

	created_node->str = strdup(str);

	if (created_node->str == NULL)
	{
		free(created_node);
		return (NULL);
	}

	created_node->len = strlen(str);
	created_node->next = *head;
	*head = created_node;

	return (created_node);
}

