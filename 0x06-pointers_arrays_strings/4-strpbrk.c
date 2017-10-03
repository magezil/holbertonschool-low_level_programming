#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - locate any of a set of bytes in string
 * @s: string to search through
 * @accept: set of bytes to locate
 *
 * Return: pointer to first occurence or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (_strchr(accept, *s) == 0)
			s++;
		else
			return (s);
	}
	return (NULL);
}

/**
 * _strchr - locate character in string
 * @s: string to search through
 * @c: character to find
 *
 * Return: first occurance of character or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
