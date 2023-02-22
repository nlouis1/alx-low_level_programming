#include <unistd.h>
/**
 * _putchar -writes c to stdout
 * Return: onsuccess 1
 * on Error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
