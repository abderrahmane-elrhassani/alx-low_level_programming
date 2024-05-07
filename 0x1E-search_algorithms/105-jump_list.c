#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted linked list of integers
 * using the Jump search algorithm.
 *
 * @list: Pointer to the head of the linked list
 * @size: Number of nodes in the linked list
 * @value: The value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *low = NULL, *high = NULL;
	size_t step = 0;

	if (list == NULL)
		return (NULL);

	/* Initialize high to the first node */
	high = list;

	/* Determine the step size for jump */
	step = sqrt(size);

	/* Perform the jump search */
	while (high->next != NULL && high->index < size && high->n < value)
	{
		low = high;
		while (high->index < step && high->next != NULL)
			high = high->next;
		printf("Value checked at index [%lu] = [%d]\n", high->index, high->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", low->index, high->index);

	/* Linear search within the identified range */
	while (low != NULL && low->index <= high->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", low->index, low->n);
		if (low->n == value)
			return (low);
		low = low->next;
	}

	return (NULL);
}

