#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char hex_digit; /* Declare a variable to store the current hex digit */

	/* Loop through the hexadecimal digits '0' to '9' and 'a' to 'f' */
	for (hex_digit = '0'; hex_digit <= 'f'; hex_digit++)
	{
		if (hex_digit <= '9' || (hex_digit >= 'a' && hex_digit <= 'f'))
		{
			putchar(hex_digit); /* Print the current hex digit */
		}
	}

	putchar('\n'); /* Print a newline character at the end */

	return (0);
}
