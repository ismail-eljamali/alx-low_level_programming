#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *m;
	int i = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	m = malloc(sizeof(char) * (i + 1));

	if (m == NULL)
		return (NULL);

	for (j = 0 ; str[j]; j++)
		m[j] = str[j];

	return (m);
}
