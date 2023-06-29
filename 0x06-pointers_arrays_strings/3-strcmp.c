#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare pointer to 2 strings
 * @s1: first pointer
 * @s2: second pointer
 * Return: condition s1 && s2
 */

char *_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
