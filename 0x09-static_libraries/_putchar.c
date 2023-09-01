#include <unistd.h>

/**
 * _putchar - write characer c
 * @c: character to print
 *
 * Return: success 1
 * error: -1
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}
