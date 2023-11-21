#include "lists.h"

/**
 * free_listint2 -Frees linked list of type listint_t and sets its head NULL.
 * @head: Pointer to a pointer of the listint_t list to be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
