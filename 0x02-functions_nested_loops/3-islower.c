#include "main.h"

/**
 * _islower - check character is lower
 *
 * @c: check input function
 *
 * Return: return 1 if c is lower
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
