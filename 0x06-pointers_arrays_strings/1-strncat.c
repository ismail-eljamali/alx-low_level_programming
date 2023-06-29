#include "main.h"
#include <stdio.h>

/**
 * _strncat - concaten 2 strings
 * @dest: input value
 * @src: input value
 * @n: number of byte
 * Return: A pointer to the result
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
	{
		i++;
	}
	for (i = 0; src[i] && i < n; i++)
	dest[j++] = src[i];
	return (dest);
}
