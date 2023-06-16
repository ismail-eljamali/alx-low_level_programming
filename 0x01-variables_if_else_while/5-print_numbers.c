#include<stdio.h>

/**
 * main - time
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 (success)
 */

int main(void)
{
	int digit;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
