#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The input string.
 *
 * Description: This function calculates length of the string and prints the
 * second half, starting from the middle character to the end.It handles both
 * even and odd-length strings.
 */
void puts_half(char *str)
{
	int index, n, length;

	length = 0;

	for (index = 0; str[index] != '\0'; index++)
		length++;

	n = length / 2;

	if ((length % 2) == 1)
		n = (length + 1) / 2;

	for (index = n; str[index] != '\0'; index++)
		_putchar(str[index]);

	_putchar('\n');
}
