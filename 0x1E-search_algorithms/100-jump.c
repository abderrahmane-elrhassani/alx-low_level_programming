#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = 0, i = 0;

	if (array != NULL)
	{
		while (high < size && array[high] < value)
		{
			low = high;
			high += sqrt(size);
			printf("Value checked array[%lu] = [%d]\n",
			       low, array[low]);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		       low, high);
		while (low <= high)
		{
			i = (low + high) / 2;
			if (i < size)
			{
				printf("Value checked array[%lu] = [%d]\n",
				       i, array[i]);
				if (array[i] == value)
					return (i);
				else if (array[i] < value)
					low = i + 1;
				else
					high = i - 1;
			}
		}
	}
	return (-1);
}
