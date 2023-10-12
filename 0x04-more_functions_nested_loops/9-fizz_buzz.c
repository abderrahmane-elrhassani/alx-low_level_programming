#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100, with Fizz for multiples of three
 * Buzz for multiples of five. For numbers that are both, it prints FizzBuzz.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
		}
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
		}

		if (i < 100)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}
