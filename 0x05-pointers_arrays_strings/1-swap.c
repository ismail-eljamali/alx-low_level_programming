#include <stdio.h>

/**
 * swap_int - Swaps the values of two int
 * @a: first int swapper
 * @b: second int swapper
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
