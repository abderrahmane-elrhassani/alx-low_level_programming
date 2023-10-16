#include "main.h"

/**
 * print_rev - Prints a string in reverse order, followed by a newline.
 * @s: The string to be printed in reverse.
 *
 * Return: void (no return value)
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
