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
			for (i = a; i <= 9; i++)
			{
				for (j = 0; j <= 9; j++)
				{
					if (!(a == i && b <= j))
					{
						putchar('0' + a);
						putchar('0' + b);
						putchar(' ');
						putchar('0' + i);
						putchar('0' + j);
						if (!(a == 9 && b == 8 && i == 9 && j == 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
