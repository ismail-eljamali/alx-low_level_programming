#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <strign.h>

/**
 * struct listint_s - single linked list
 * @str: strinf
 * @next: point mode
 * Description: singly linked
 */
typedef struct listint_s
{
	int str;
	struct listint_s *next;
} listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);

#endif
