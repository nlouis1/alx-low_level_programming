#include "main.h"

/**
 * set_bit - A function that sets the value 1.
 * @n: A pointer to the bit.
 * @index: A variable to set a value and start at 0.
 * Return: On Success 1,Otherwise -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
