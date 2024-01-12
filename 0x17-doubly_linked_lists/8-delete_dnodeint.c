#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a specified index in a
 * doubly linked list.
 * @head: Pointer to the pointer to the head of the linked list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *previous;
	unsigned int count;

	current = *head;

	/* Move to the start of the list if needed */
	if (current != NULL)
		while (current->prev != NULL)
			current = current->prev;

	count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			if (count == 0)
			{
				*head = current->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				previous->next = current->next;

				if (current->next != NULL)
					current->next->prev = previous;
			}
			free(current);
			return (1);
		}

		previous = current;
		current = current->next;
		count++;
	}

	return (-1);
}
