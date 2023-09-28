#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializes a struct dog with provided values.
 * @d: Pointer to the struct dog to be initialized.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: The name of the owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

