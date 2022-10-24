#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - starts the file
 * @d: var
 */

void print_dog(struct dog *d)
{

	if (d != NULL)
	{

	if (d->name == NULL)
	{
	
		printf("Name: (nil)");

	}
	else
	{
	
		printf("Age: %d\n", d->name);

	}

	if (d->age == NULL)
	{
	
		printf("Age: (nil)");

	}
	else
	{
	
		printf("Age: %d\n", d->age);

	}
	if (d->owner == NULL)
	{
	
		printf("Owner: (nil)");

	}
	else
	{
	
		printf("Owner: %d\n", d->owner);

	}

	}

}
