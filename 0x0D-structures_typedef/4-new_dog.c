#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 *
 * Return: pointer to new dog (success) or NULL (fail)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	char *nname;
	char *nowner;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	nname = malloc(_strlen(name) * sizeof(char));
	if (nname == NULL)
		return (NULL);
	nowner = malloc(_strlen(owner) * sizeof(char));
	if (nowner == NULL)
		return (NULL);
	_strcpy(nname, name);
	_strcpy(nowner, owner);
	ndog->name = nname;
	ndog->age = age;
	ndog->owner = nowner;

	return (ndog);
}

/**
 * _strcpy - copies given string
 * @dest: pointer that is the destination of the copy
 * @src: string to copy
 *
 * Return: pointer to copy of string
 */
char *_strcpy(char *dest, char *src)
{
	char *temp;

	temp = dest;
	while (*src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';
	return (dest);
}

/**
 * _strlen - return length of a string
 * @s: string to find the length of
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;

	return (count);
}
