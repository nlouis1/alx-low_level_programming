#include <unistd.h>
/**
 * Put_alphabet -display alphabelt and new line
 * void: return nothing(success)
 */
void print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		putchar('\n');
	}
}
