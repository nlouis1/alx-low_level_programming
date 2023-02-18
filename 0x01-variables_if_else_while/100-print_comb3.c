#include <stdio.h>
/**
 * main -A program number 1 in special
 * Return:0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 90; a++)
	{
		if (a < 10)
		{
			putchar('0');
			putchar(a + '0');
		}
		if (a >= 10)
		{
			putchar(a + '0');
		}
		putchar(',');
		putchar(' ');
	}
	return (0);
}
