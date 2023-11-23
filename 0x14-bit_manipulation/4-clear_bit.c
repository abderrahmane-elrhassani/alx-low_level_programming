#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a specified index.
 *
 * This function takes a pointer to an unsigned long integer 'n' and an index
 * 'index' and clears the bit at the given index by setting it to 0. It returns
 * 1 upon successful execution or -1 if an error occurs, such as an invalid index.
 *
 * @n: Pointer to the number to modify
 * @index: Index (starting from 0) of the bit to clear
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask <<= index;
	mask = ~mask;
	*n &= mask;

	return (1);
}
