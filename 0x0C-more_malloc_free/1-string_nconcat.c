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
	unsigned int i, j, s1_l, s2_l;

	while (s1 && s1[s1_l])
		s1_l++;
	while (s2 && s2[s2_l])
		s2_l++;

	if (n < s2_l)
		str = malloc(sizeof(char) * (s1_l + n + 1));
	else
		str = malloc(sizeof(char) * (s1_l + s2_l + 1));

	if (!str)
		return (NULL);

	while (i < s1_l)
	{
		str[i] = s1[i];
		i++;
	}

	while (n < s2_l && i < (s1_l + n))
		str[i++] = s2[j++];
	while (n >= s2_l && i < (s1_l + s2_l))
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
