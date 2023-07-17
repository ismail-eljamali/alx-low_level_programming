#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - init a var
 * @d: pointer to struct dog
 * @age: age to initialize
 * @name: name to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->n = n;
	d->a = &;
	d->o = o;
}
