#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a variable of type struct dog initialized
 * @d: pointer to struct dog to initialize
 * @name: initialization of name
 * @age: initialization of age
 * @owner: initialization of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

