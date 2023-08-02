#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: first mode
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
