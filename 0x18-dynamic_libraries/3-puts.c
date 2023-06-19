#include "main.h"
/**
 * _puts -print something
 * @str : printing string pointer
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
