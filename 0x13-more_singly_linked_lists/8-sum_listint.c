#include "lists.h"

/**
 * sum_listint - Computes the sum of all data in a listint_t linked list.
 * @head: Pointer to the first node in the linked list.
 *
 * Return: The resulting sum of all data.
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
