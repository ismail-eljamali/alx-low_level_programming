#include "main.h"
#include <stdlib.h>

/**
 * *_memset - allocates memory for an array
 * @s: pointer to put
 * @b: constant
 * @n: max bytes
 * Return: s
 */
char *_memset(char *s, char *b, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		s[p] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: array lenght
 * @size: size of each elemen
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);

	m = malloc(size * nmemb);

	if (m == 0)
		return (NULL);

	_memset(m, 0, size *  nmemb);

	return (m);
}
