#include "main.h"

/**
 * get_bit-Retrieves the value of a bit at  specified index in decimal number.
 *
 * This function takes an unsigned long integer 'n' and an index 'index'
 * to return the value (either 0 or 1) of the bit at the specified index.
 *
 * @n: The decimal number to search for the bit value
 * @index: The index of the bit to retrieve (0 being the least significant bit)
 *
 * Return: The value of the bit the given index, or -1 if the index is invalid
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
