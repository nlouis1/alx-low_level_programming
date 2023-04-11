#include "main.h"

/**
 * binary_to_uint -A function that changes binary
 * @b: a variable contains binary number
 * Return: Onsuccess converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int counter;
	unsigned int decimalEq = 0;

	if (!b)
		return (0);
	for (counter = 0; b[counter]; counter++)
	{
		if (b[counter] < '0' || b[counter] > '1')
			return (0);
		decimalEq = 2 * decimalEq + (b[counter] - '0');
	}
	return (decimalEq);
}
