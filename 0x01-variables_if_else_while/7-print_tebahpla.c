#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'z'; /* Initialize the letter with 'z' */

	while (letter >= 'a') /* Loop from 'z' down to 'a' */
	{
		putchar(letter); /* Print the current letter */
		letter--; /* Decrement the letter to move to the previous one */
	}

	putchar('\n'); /* Print a newline character at the end */

	return (0);
}
