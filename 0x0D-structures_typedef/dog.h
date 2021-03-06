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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
