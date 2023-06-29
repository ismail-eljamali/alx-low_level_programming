#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copie input number
 * @dest: input value
 * @src: input value
 * @n: max numbers
 * Return: result string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = scr[i];
	for (i = j; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
