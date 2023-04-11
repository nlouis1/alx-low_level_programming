#include "main.h"

/**
 * get_endianness - A function to checks the endianness.
 * Return: for big-endian 0, for little-endian 1.
 */

int get_endianness(void)
{
	int number = 1;
	char *endian = (char *)&number;

	if (*endian == 1)
		return (1);

	return (0);
}
