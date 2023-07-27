#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node - prints all the elements of a list_t list
 * @head: linked list
 * @str: string to add the node
 * Return: adress
 */
list_t *add_node(list_t *head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = _head;
	*head = temp;
	return (temp);
}
