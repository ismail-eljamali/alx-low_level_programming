#include "main.h"

/**
 * _atoi - Convert string to int
 * @s: string use
 * Return: int
 */
char _atoi(char *s)
{
	int i = 0, sing = 1;
	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sing *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}
