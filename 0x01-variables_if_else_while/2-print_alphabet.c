#include <stdio.h>


/**
 * main - program that prints the alphabet in lowercase
 *
 *  Return: Always 0.
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
