#include "main.h"

/**
 * print_array - Prints the first n elements of an integer array.
 * @a: The name of the array.
 * @n: The number of elements from the array to be printed.
 *
 * Description: This function takes an integer array and the number of elements
 * to be printed from the beginning of array. It prints the elements separated
 * by a comma and space, and adds a newline at the end.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
