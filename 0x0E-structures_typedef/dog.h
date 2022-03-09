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

/**
*dog_t - new name for the type struct dog
*/
typedef struct dog dog_t;

void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
