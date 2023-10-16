#include "main.h"

/**
 * rev_string - Reverses the order of characters in a string.
 * @s: The input string to be reversed.
 *
 * Description: This function takes an input string and reverses the order
 * of characters in place.
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;

	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
