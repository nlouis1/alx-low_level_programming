#include "main.h"
/**
 * main -A program to display alphabet
 * return 0 (success)
 */
void print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		_putchar('\n');
		c++;
	}
}
