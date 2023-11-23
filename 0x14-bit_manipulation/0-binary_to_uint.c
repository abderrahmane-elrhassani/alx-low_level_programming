#include "main.h"

/**
 * binary_to_uint - Converts a binary number represented as a string to an unsigned int
 * @b: String containing the binary number
 *
 * Returns: The converted number as an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
    int index;
    unsigned int decimal_value = 0;

    if (!b)
        return (0);

    for (index = 0; b[index]; index++)
    {
        if (b[index] < '0' || b[index] > '1')
            return (0);
        decimal_value = 2 * decimal_value + (b[index] - '0');
    }

    return (decimal_value);
}
