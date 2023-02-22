#include "main.h"
/**
 * print_alphabet -program to display alphabet
 * Void: return
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
