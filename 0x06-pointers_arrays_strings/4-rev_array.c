#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse content array to integer
 * @a: array of integer to reverse
 * @n: number of element in the array
 */

void reverse_array(int *a, int n)
{
	int t, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		t = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = t;
	}
}
