#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function
 * @d: param1
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (!d->name) ? "(nil)" : d->name);
		printf("Age: %f\n", (!d->age) ? 0 : d->age);
		printf("Name: %s\n", (!d->owner) ? "(nil)" : d->owner);
	}

}
