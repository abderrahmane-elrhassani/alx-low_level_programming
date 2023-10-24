#include "main.h"

/**
 * set_string - Sets the value of a pointer to a string.
 *
 * @s: A pointer to a pointer to a string.
 *
 * @to: The string to set the pointer to.
 */
void set_string(char **s, char *to)
{
    *s = to;
}
