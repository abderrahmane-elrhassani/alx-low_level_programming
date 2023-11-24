#include "main.h"

/**
 * flip_bits - Counts the number of bits to change
 *             to convert one number into another.
 *
 * This function takes two unsigned long integers, 'n' and 'm', and calculates
 * the number of bits that need to be flipped in 'n' to transform it into 'm'.
 * It returns the count of bits that are different between the two numbers.
 *
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits to change from 'n' to 'm'
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
