#include "holberton.h"

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
