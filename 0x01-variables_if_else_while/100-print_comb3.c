#include <stdio.h>
/**
 * main -A program number 1 in special
 * Return:0 (success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			putchar(a);
			putchar(b);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
