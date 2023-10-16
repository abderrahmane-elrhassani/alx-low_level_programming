#include "main.h"

/**
 * puts2 - Prints every second character starting with first one from a string.
 * @str: The input string.
 *
 * Description: This function iterates through the string and prints only every
 * second character, starting from the first character.
 */

void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
