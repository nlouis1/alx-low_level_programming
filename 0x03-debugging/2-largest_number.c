#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest, mid;

	if (a > b)
	{
		mid = a;
	}
	else
		if (b > a)
		{
			mid = b;
		}
		else
		{
			mid = a;
		}
	if (mid > c)
	{
		largest = mid;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
