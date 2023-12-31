#include "main.h"

/**
 * _print_rev_recursion - Recursively print a string in reverse.
 *
 * @s: The string to print in reverse.
 *
 * Return: None.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
