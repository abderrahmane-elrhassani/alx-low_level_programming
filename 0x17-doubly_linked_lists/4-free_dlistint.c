#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: No return.
 */
void free_dlistint(dlistint_t *head)
{
	/* Check if the head is NULL and return if so */
	while (head != NULL)
	{
		/* Traverse the list, freeing each node */
		dlistint_t *next = head->next;

		free(head);

		head = next;
	}
}
