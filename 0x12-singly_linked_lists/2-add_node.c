#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Inserts a new node at the start of a linked list.
 * @head: Pointer to a pointer to the list_t list.
 * @str: String to be stored in the new node.
 *
 * Return: Pointer to the newly created node, or NULL on failure.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	new->len = len;
	new->next = *head;
	*head = new;

	return (*head);
}
