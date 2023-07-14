#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - that concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: Nb of bytes from n2
 * Return: pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		str = malloc(sizeof(char) * (l1 + n + 1));
	else
		str = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!str)
		return (NULL);

	while (i < l1)
	{
		str[i] = s1[i];
		i++;
	}

	while (n < l2 && i < (l1 + n))
		str[i++] = s2[j++];

	while (n >= l2 && i < (l1 + l2))
		str[i++] = s2[j++];

	str[i] = '\0';

	return (str);
}
