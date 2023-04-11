#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 * flipped to get from one number to another.
 * @n:a variable to hold The number.
 * @m: The number to flip n to.
 * Return: The necessary number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ExclusiveOr = n ^ m, result = 0;

	while (ExclusiveOr > 0)
	{
		result += (ExclusiveOr & 1);
		ExclusiveOr >>= 1;
	}

	return (result);
}
