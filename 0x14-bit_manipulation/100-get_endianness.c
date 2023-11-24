#include "main.h"

/**
 * get_endianness - Checks the endianness of the machine.
 *
 * This function determines ifthe machine architecture is little or big endian.
 * It uses an integer 'i' and checks the value of the first byte to determine
 * the endianness. If the first byte's value is non-zero, the machine is
 * little endian; otherwise, it is big endian.
 *
 * Return:
 *        0 - If the machine is big endian.
 *        1 - If the machine is little endian.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return (*c);
}
