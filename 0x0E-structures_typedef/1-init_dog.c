#include <stdio.h>
#include "dog.h"

/**
 * init_dog - A function
 *
 * @d: structure
 * @name: param2
 * @age: param3
 * @owner: param4
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
