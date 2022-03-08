#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure
 * @name: name
 * @owner: owner
 * @age: age
 */

struct dog
{
	char *name;
	char *owner;
	float age;
}

dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
