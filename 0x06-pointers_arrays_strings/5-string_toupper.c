#include "main.h"

/**
 * string_toupper-Convert all lowercase characters to uppercase in a string
 * @n: The string to be converted
 *
 * Return: A pointer to the modified string
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
