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
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Age: %s\n", d->name);
	}
	if (d->age < 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %.6f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
	}
	else
	{
	return;
	}
}
