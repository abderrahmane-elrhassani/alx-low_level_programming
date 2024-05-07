#include "search_algos.h"
/**
 * advanced_binary_recursive - Recursively searches for a value in a sorted
 *                            array of integers using binary search.
 *
 * @array: Pointer to the first element of the [sub]array to search.
 * @left: The starting index of the [sub]array to search.
 * @right: The ending index of the [sub]array to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present, returns -1.
 *         Otherwise, returns the index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}
/**
 * advanced_binary - Searches for a value in a sorted array
 *                   of integers using an advanced binary search.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: If the value is not present or the array is NULL, returns -1.
 *         Otherwise, returns the first index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change.
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	int result = -1;

	if (array != NULL && size > 0)
	{
		while (left <= right)
		{
			size_t mid = left + (right - left) / 2;

			printf("Searching in array: ");
			for (size_t i = left; i <= right; i++)
			{
				printf("%d", array[i]);
				if (i < right)
					printf(", ");
			}
			printf("\n");

			if (array[mid] == value)
			{
				result = mid;
				break;
			}
			else if (array[mid] < value)
				left = mid + 1;
			else
				right = mid - 1;
		}
	}
	return result;
}
