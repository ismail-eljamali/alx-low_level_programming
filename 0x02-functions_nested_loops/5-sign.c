#include "main.h"

/**
 * print_sign - check character is lower
 *
 * @n: check integertype input function
 *
 * Return: return 1 if c is lower
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
