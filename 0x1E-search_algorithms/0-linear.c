#include "search_algos.h"

/**
 *inear_search - This function implements the linear search algorithm
 *to find a value in an array of integers.
 *@size: Number of elements in the array.
 *@array: Pointer to the first element of the array to search in.
 *@value: Value to search for.
 *If the value is not present in the array or if the array is null
 * it returns -1.
 *Returns: The index of the first occurrence of the value in the array, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value) /* if (*(array + i) == value) */
			return (i);
	}
	return (-1);
}
