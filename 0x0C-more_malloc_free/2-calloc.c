#include "main.h"

/**
 * _calloc - Allocates memory for an array of @nmemb elements of
 * @size bytes each and returns a pointer to the allocated memory.
 *
 * @nmemb: Number of elements to allocate memory for
 * @size: Size of each element in bytes
 *
 * Return: A pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < (nmemb * size); index++)
		array[index] = 0;

	return (array);
}
