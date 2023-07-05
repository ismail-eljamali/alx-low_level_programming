#include "main.h"
#include <stdio.>

int check_prime(int n, int i);

/**
 * _is_prime_number - return square root
 * @n: number
 * Return: result square root
 */
int _is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - find the naturel
 * @n: number
 * @i: iterator
 * Return: result square root
 */
int check_prime(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	if (n % i == 0 || n <= 1)
		return (0);
	return (check_prime(n, i + 1));
}
