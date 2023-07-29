#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
int len(const char *str);
list_t *create_node(const char *str);
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the linked
 * @str: string to store the list
 * Return: adress
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;

	current_node = *head;
	if (head == NULL)
	{
		return (NULL);
	}
	new_node = create_node(str);
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (current_node->next != NULL)
		current_node = current_node->next;
	current_node->next = new_node;
	return (*head);
}
/**
 * create_node - create nodes function
 * @str: string
 * Return: pointer
 */
list_t *create_node(const char *str)
{
	list_t *new_code;

	new_code = malloc(sizeof(list_t));
	if (new_code == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;
	return (new_code);
}
/**
 * len - length of string
 * @str: string
 * Return: amount
 */
int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
