#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - return square root
 * @n: number
 * Return: result square root
 */
int _sqrt_recursion(int n)
{
	return (actual_sqrt_recursion(n, 1));
}

/**
 * actual_sqrt_recursion - find the naturel
 * @n: number
 * @i: iterator
 * Return: result square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
