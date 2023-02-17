#include <stdio.h>
/**
 * main -A program to uppercase
 * Return: 0 (success)
 */
int main(void)
{
	char c = 'a', d = 'A';

	while
		(c <= 'z')
		{
		putchar(c);
		c++;
		}
	while
		(d <= 'Z')
		{
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
