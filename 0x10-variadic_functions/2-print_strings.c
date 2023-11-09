#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Displays a sequence of strings followed by a newline.
 * @separator: The string used between strings (not printed if NULL).
 * @n: The number of strings provided to the function.
 * @...: Variable list of strings to print.
 *
 * Note: If separator is NULL, it won't be printed.
 *       If any of the strings is NULL, "(nil)" will be printed in its place.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
