#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for
 * @d: Pointer to the dog_t to be freed.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
	return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
