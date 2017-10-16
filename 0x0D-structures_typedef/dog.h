#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creates a dog and keeps all info together for given dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef struct dog dog_t;

#endif
