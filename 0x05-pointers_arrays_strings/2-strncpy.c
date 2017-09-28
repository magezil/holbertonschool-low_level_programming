#include "holberton.h"

/**
 * _strncpy - copy up to n bytes of string
 * @dest: destination string of copy
 * @src: string to copy up to n bytes
 * @n: number of bytes to copy
 *
 * Return: concatentated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	if (i < n)
		dest[i] = '\0';
	return (dest);
}
