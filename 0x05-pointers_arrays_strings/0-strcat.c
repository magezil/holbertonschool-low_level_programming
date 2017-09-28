#include "holberton.h"

/**
 * _strcat - concatentates two strings
 * @dest: string to be appended to
 * @src: string to append
 *
 * Return: concatentated string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	char *temp;

	temp = dest;
	while (*temp != '\0')
		temp++;
	for (i = 0; src[i] != '\0'; i++)
	{
		*temp = src[i];
		temp++;
	}
	*temp = '\0';
	return (dest);
}
