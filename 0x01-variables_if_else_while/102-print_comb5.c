#include <stdio.h>
/**
 * main -A progra last task
 * Return: 0(success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
	{
		for (b = 0; b <= 100 ; b++)
		{
			putchar('0' + a);
			putchar('0' + b);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
