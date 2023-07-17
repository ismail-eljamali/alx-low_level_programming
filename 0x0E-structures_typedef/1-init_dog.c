#include "dog.h"

/**
 * init_dog - initialize dog
 * @d: dog to initialize
 * @name: name to initialize
 * @age: age ti initialize
 * @owner: owner to initialize
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
