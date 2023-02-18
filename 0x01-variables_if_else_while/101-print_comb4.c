#include <stdio.h>
/**
 * main -A program to do task 11
 * Return: 0 Csuccess
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				if (a != b && b != c && a != c)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar('0' + c);
				}
				if (!(a == 7 && b == 8 && c == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
