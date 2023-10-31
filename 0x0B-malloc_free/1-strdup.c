#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string to a new memory location
 * @str: The input string to be duplicated
 * Return: A pointer tothe duplicated string or NULL if memory allocation fails
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
		i++;

	duplicate = malloc(sizeof(char) * (i + 1));

	if (duplicate == NULL)
		return (NULL);

	for (length = 0; str[length]; length++)
		duplicate[length] = str[length];

	return (duplicate);
}
