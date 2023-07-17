#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - init a var
 * @d: pointer to struct dog
 * @a: age to initialize
 * @n: name to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *n, float a, char *o)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->n = n;
	d->a = &;
	d->o = o;
}
