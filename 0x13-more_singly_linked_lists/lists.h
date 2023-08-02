#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <strign.h>

/**
 * struct list_s - single linked list
 * @str: strinf
 * @len: length of string
 * @next: point mode
 * Description: singly linked
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);

#endif
