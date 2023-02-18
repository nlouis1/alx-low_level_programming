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
		for (b = a + 1; b <= 9; b++)
		{
			putchar('0' + a);
			putchar('0' + b);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
