#include "lists.h"

/**
 * dlistint_len-Returns the number elements in a linked dlistint_t list.
 * @h: Pointer to the head of the list
 *
 * Return: Number of elements
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = *head;

	new_node->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new_node;

	(*head) = new_node;

	return (new_node);
}
