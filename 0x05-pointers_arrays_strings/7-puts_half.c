#include "main.h"

/**
 * puts_half - Prints half string
 * @str: String to print
 * Return: void
 */

void puts_half(char *str)
{
	int j;
	int l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 1)
	{
		j = (l - 1) / 2;
		j += 1;
	}
	else
	{
		j = l / 2;
	}
	for (; j < l; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
