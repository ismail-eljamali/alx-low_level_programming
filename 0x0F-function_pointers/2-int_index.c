#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: int array
 * @size: size array
 * @cmp: compare function
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
}
