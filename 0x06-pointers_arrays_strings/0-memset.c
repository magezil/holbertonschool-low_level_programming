#include "holberton.h"

/**
 * _memset - fills memory with constant byte
 * @s: memory to fill
 * @b: byte used to fill memory
 * @n: number of bytes of memory to fill
 *
 * Return: pointer to filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;

	if (n <= 0)
		return (0);

	for ( ; n > 0; n--)
	{
		*temp = b;
		temp++;
	}
	return (s);
}
