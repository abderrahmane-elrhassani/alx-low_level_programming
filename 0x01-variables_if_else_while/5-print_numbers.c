#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single-digit numbers of base 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar(number + '0'); /* Convert the number to its ASCII representation */
		number++;
	}

	putchar('\n');

	return (0);
}
