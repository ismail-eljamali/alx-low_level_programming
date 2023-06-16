#include<stdio.h>

/**
 * main - time
 *
 * Description: prints all single digit numbers of base 10 starting from  0
 *
 * Return: 0 (success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	printf("\n");

	return (0);
}
