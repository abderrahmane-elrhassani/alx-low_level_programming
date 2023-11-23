#include "main.h"

/**
 * print_binary - Prints the binary representation of a given decimal number.
 *
 * This function takes an unsigned long integer 'n' and prints its binary
 * representation to the standard output.
 *
 * @n: The decimal number to be converted and printed in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}
	if (!count)
	{
		_putchar('0');
	}
}
