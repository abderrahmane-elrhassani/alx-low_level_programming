#include "main.h"
/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer to be swapped.
 * @b: Pointer to the second integer to be swapped.
 *
 * Description: This function takes two pointers to integers, and it swaps
 * the values of the integers they point to.
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
