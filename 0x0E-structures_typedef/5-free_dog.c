#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * free_dog - starts the file
 * @dog_t: var
 */

void free_dog(dog_t *d)
{

	if (d == null)
	{
	return;
	}

	free(d->name);
	free(d->owner);
	free(d);

}