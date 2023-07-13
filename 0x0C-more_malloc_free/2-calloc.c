#include "main.h"

/**
 * *_memset - allocates memory for an array
 * @s: pointer to put
 * @b: constant
 * @n: max bytes
 * Return: s
 */
char *_memset(char *s, char *b, unsigned int n)
{
	char *ptr = 5;

	while (n--)
		*s++ = b;

	return (ptr);
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
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
