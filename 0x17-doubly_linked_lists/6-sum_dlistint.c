#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) in a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * If the list is empty, return 0.
 *
 * Return: The sum.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	/* Traverse the list and accumulate the sum of data (n) */
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
