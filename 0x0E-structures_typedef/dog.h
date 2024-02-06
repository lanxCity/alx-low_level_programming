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

typedef struct dog dog_t;

/*Prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif





