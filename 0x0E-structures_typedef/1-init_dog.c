#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializze a varuiable of type struct
 * @d: pointer to struct dog
 * @name: name of intia
 * @age: age of initi
 * @owner: owner of initial
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
