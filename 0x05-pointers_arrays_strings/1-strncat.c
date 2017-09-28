#include "holberton.h"

/**
 * _strncat - concatentates two strings up to n bytes
 * @dest: string to be appended to
 * @src: string to append up to n bytes
 * @n: number of bytes to append
 *
 * Return: concatentated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *temp;

	temp = dest;
	while (*temp != '\0')
		temp++;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*temp = src[i];
		temp++;
	}
	*temp = '\0';
	return (dest);
}
