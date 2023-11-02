#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes of s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
		;

	for (len2 = 0; s2[len2]; len2++)
		;

	if (n >= len2)
		n = len2;

	str = malloc(sizeof(char) * (len1 + n + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';

	return (str);
}
