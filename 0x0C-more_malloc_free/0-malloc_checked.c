#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: int
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
