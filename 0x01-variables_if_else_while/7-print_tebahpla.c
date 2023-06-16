#include<stdio.h>

/**
 * main - time
 *
 * Description: prints the lowercase alphabet in reverse
 *
 * Return: 0 (success)
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar ('\n');

	return (0);
}
