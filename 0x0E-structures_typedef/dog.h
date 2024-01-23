#ifndef DOG_H
#define DOG_H

/*Defining a struct*/
struct dog
{
	char* name;
	float age;
	char* owner;
};


/*Declaration of functions*/
void init_dog(struct dog *d, char *name, float age, char *owner);








#endif
