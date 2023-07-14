#include "main.h"
#include <stdlib.h>

/**
 * *array_range - create array of integers
 * @min: min
 * @max: max
 * Return: pointer of new array
 */
int *array_range(int min, int max)
{
	int *p, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
