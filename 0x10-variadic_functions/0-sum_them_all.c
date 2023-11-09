#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Adds up the values of its parameters.
 * @n: Number of parameters supplied to the function.
 * @...: Variable parameters to be summed.
 *
 * Return: If n is 0, returns 0; otherwise, returns the total sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
