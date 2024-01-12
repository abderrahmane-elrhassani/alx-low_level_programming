#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the  doubly linked list at the given index.
 * @head: Pointer to the head of the list.
 * @index: Position of the node, starting from 0.
 *
 * If the node does not exist, return NULL.
 *
 * Return: The nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	/* Check if the head is NULL */
	if (!head)
		return (NULL);

	/* Traverse the list until the desired index is reached */
	while (head != NULL)
	{
		/* Break the loop when the index is found */
		if (i == index)
			break;

		i++;
		/* Move to the next node if the index is not found */
		head = head->next;
	}

	/* Return the node at the specified index */
	return (head);
}
