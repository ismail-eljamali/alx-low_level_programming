#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * list_len - return number the elements of a list_t list
 * @h: pointer to list_t
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
