#include "main.h"

/**
 * print_diagonal - Draws diagonal line according to parameter
 * @n: number diagonal line to draw
 * Return: empty
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(32);
		}
		for (y = 0; y < n; y++)
		{
			_putchar(92);
			_putchar('\n');
		}
	}
}
