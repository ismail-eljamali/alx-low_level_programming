#include "lists.h"
void __attribute__((constructor)) hare(void);
/**
 * hare - Function that runs before the main function
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}