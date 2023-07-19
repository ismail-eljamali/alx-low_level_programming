#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: string name
 * @f: printing function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
