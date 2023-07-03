#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: memory stored
 * @src: memory copied
 * @n: number of byte
 *
 * Return: copied memory
 */
char *_memcpy(char *dest, char src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; n < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
