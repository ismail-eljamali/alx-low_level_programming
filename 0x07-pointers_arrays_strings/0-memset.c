#include "main.h"

/**
 * _memset - fill block memory with specific value
 * @s: start address
 * @b: desire value
 * @n: number of byte
 *
 * Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
