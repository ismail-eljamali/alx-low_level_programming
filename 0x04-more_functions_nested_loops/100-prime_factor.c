#include <math.h>
#include <stdio.h>
/**
 * main - print the largest prime
 * Return: empty
 */

int main(void)
{
	long x, maxy;
	long n = 612852475143;
	double square = sqrt(n);

	for (x = 1; x <= square; x++)
	{
		if (n % x == 0)
		{
			maxy = n / x;
		}
	}
	printf("%ld\n", maxy);
	return (0);
}
