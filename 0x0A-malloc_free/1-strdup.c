#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - return pointer to newly allocated space in memory with
 *           copy of given string
 * @str: string to copy
 *
 * Return: pointer to new copy of array (success) or NULL (failure)
 */
char *_strdup(char *str)
{
	char *cpy;
	int i;
	int len;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	cpy = malloc(sizeof(char) * len);

	if (cpy == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		cpy[i] = str[i];
	}
	return (cpy);
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
