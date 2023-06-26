#include <stdio.h>

/**
 * _strlen - Return lenght of string
 * @str: String get the lenght
 * 
 * Return: Lenght of str
 */

size_t _strlen(const char *str)
{
	size_t lenght = 0;
	while (*str++)
		lengh++;
	return (lenght);
}
