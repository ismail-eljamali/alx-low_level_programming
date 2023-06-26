#include <stdio.h>

/**
 * _puts - Prints string
 * @str: String
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
