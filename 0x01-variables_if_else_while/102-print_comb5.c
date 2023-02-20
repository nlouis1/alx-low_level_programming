#include <stdio.h>
/**
 * main -A progra last task
 * Return: 0(success)
 */
int main(void)
{
	int a, b, j, i;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9 ; b++)
		{
			for (i = 0; i <= 9; i++)
			{
				for (j = i + 1; j <= 9; j++)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar(' ');
					putchar('0' + i);
					putchar('0' + j);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
