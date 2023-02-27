#include "main.h"
/**
 *swap_int -swap two numbers numbers
 * Return nothing
 * address of a,b;
 * @a: address to store data
 * @b: stored to store a second number
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
