#include "holberton.h"

/**
 * _memcpy - copy memory area
 * @dest: destination memory to copy to
 * @src: source memory to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
