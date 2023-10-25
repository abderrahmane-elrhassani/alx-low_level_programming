#include "main.h"

/**
 * _puts_recursion - Recursively print a string.
 *
 * @s: The string to print.
 *
 * Return: None.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
