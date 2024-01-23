#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defining a struct
 * @name: item1
 * @age: item2
 * @owner: item3
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif

#ifndef INITDOG_H
#define INITDOG_H

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif





